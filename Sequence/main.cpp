//�� �������� ������� ������� ��������� ��������� � ����� �-11
#include <iostream>
#include "funct2_1.h"

using namespace std;

//���i� � ������ �������� �� � ������� �������
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << "���i��� 110: � ����i�������i �i��� �������� ��i �����, � ����������� ������ ���� ���� ����� 2. "
		" ������ ����� �������� �i�����i����i��� �������, �� � ������� ������� ���i��." << endl << endl;
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