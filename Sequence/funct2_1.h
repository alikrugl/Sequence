//Цю програму створив Круглєня Олександр Сергійович з групи К-11
#pragma once

// шукає елементи з цифрою 2
bool hasDigit2(int i);

// виводить масив
void printArray(int a[], int length, int startIndex, const int Nmax);

//виводить length елементів, що містять 2, починаючи зі startIndex
void printResult(int a[], int length, int startIndex); // функція призначена виключно для виводу результату findDescendingSubsequence

// шукає підпослідовність
void findDescendingSubsequence(int a[], int n, int& seqStart, int& seqLength);
