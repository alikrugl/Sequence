//�� �������� ������� ������� ��������� ��������� � ����� �-11
#pragma once

// ���� �������� � ������ 2
bool hasDigit2(int i);

// �������� �����
void printArray(int a[], int length, int startIndex, const int Nmax);

//�������� length ��������, �� ������ 2, ��������� � startIndex
void printResult(int a[], int length, int startIndex); // ������� ���������� �������� ��� ������ ���������� findDescendingSubsequence

// ���� �������������
void findDescendingSubsequence(int a[], int n, int& seqStart, int& seqLength);