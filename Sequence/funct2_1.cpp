//Цю програму створив Круглєня Олександр Сергійович з групи К-11
#include <iostream>
#include "funct2_1.h"

using namespace std;

bool hasDigit2(int i)
{
	while (i > 0)
	{
		if (i % 10 == 2)
			return true;
		i /= 10;
	}
	while (i < 0)
	{
		i *= (-1);
		if (i % 10 == 2)
			return true;
		i /= 10;
	}
	return false;
}

void printArray(int a[], int length, int startIndex, const int Nmax)
{
	if (length == 0 || length > Nmax || startIndex < 0)
	{
		cout << "No elements to print! Number of elements must be more than 0 and less than 1000" << endl;
		return;
	}
	for (int i = startIndex; i < startIndex + length; i++)
	{
		cout << a[i];
		if (i < startIndex + length - 1)
			cout << ", ";
		else
			cout << ".";
	}
	cout << endl;
}

void printResult(int a[], int length, int startIndex)
{
	if (length == 0 || startIndex < 0)
	{
		cout << "Result sequence is empty!" << endl;
		return;
	}
	int j = 0;
	for (int i = startIndex; j < length; i++)
	{
		if (hasDigit2(a[i]))
		{
			j++;
			cout << a[i];
			if (j < length)
				cout << ", ";
			else
				cout << ".";
		}

	}
	cout << endl;
}

void findDescendingSubsequence(int a[], int n, int& seqStart, int& seqLength)
{
	int maxlen = 0; //початкова відсутність послідовності відображена у її довжині = 0
	int curlen = 0;
	int startIndex = -1;
	int resStart = -1;
	int prevWith2 = -1;
	int prevWith2Index = -1;
	for (int i = 0; i < n; i++) {
		if (!hasDigit2(a[i])) // в явному вигляді покажемо, що пропускаємо елементи без двійок при обробці
		{
			continue;
		}
		else //тут і-тий елемент має двійку у своєму записі
		{
			if (hasDigit2(prevWith2) && a[i] < prevWith2)
			{
				curlen++;
				if (curlen == 1)
					startIndex = prevWith2Index;
			}
			else
			{
				if (curlen > maxlen)
				{
					maxlen = curlen;
					resStart = startIndex;
				}
				curlen = 0;
			}
			prevWith2 = a[i];
			prevWith2Index = i;
		}
	}
	if (curlen > maxlen)
	{
		maxlen = curlen;
		resStart = startIndex;
	}
	seqLength = maxlen + 1;
	seqStart = resStart;
}
