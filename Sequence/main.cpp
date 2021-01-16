//Цю програму створив Круглєня Олександр Сергійович з групи К-11
#include <iostream>
#include "funct2_1.h"

using namespace std;

//серiя з одного елемента не є власною спадною
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << "Варiант 110: З послiдовностi цiлих вилучили усi числа, у десятковому запису яких нема цифри 2. "
		" Знайти першу найдовшу пiдпослiдовнiсть залишку, що є власною спадною серiєю." << endl << endl;
	const int Nmax = 1000;
	int a[Nmax];
	cout << "Enter the array(size is less than or equal to 1000): " << endl;
	int n = -1;
	while (cin >> a[++n]);
	int seqStart, seqLength;
	findDescendingSubsequence(a, n, seqStart, seqLength);
	cout << endl << endl << "***** Input:" << endl;
	printArray(a, n, 0, Nmax);
	cout << endl << endl << "***** Output, 110: " << endl;
	printResult(a, seqLength, seqStart);
	cout << "*****" << endl;
	system("pause");
}