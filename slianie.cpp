// ConsoleApplication21.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int* scanArr(int* arr,int size);
void printArr(int* arr, int size);
int* buble(int* arr, int size);
int* insertArr(int* arr, int size);
int* mergeArr(int* arrA, int* arrB, int* arrC, int a, int b);

int main()
{
	int z = 0;
	const int m = 8;     const int N = 8;  
	// константы большимим буквами
	const int n = 7;	//  ....
	int a[m];
	int b[n];
	
	printf_s("vvod mass a \n");
	scanArr(a, m);
	printArr(a, m);
	printf_s("\n");   // здесь это не надо перенести в функцию печати массива
	buble(a, m);
	printf_s("otsort. massiv a \n");
	printArr(a, m);

	printf_s("\n");
	printf_s("\n");

	printf_s("vvod mass b \n");
	scanArr(b, n);
	printArr(b, n);
	printf_s("\n");
	insertArr(b, n);
	printf_s("otsort. massiv b \n");
	printArr(b, n);

	printf_s("\n");
	printf_s("\n");

	const int L = m + n;
	int c[l];
	mergeArr( a, b, c,m, n);
	printf_s("otsort. massiv c \n");
	printArr(c, l);

	int w;
	scanf_s("%i", &w);
    return 0;
}

int* scanArr(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		printf_s("vvedite %i element", i);
		scanf_s("%i", &arr[i]);
	}
	return(arr);
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf_s("%i", arr[i]);
	}
	printf_s("\n");
}
int* buble(int* arr, int size) {
	for (int i = 0; i < size; i++){
		for (int j = size - 1; j > i; j--){
			if (arr[j] < arr[j - 1]){
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	return(arr);
}

int* insertArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int temp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j]>temp) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
	return(arr);
}

int* mergeArr(int* arrA,int* arrB,int* arrC, int x,int v) {
	int e = 0; int g = 0; int d = 0;
	while (e < x && g < v) {
		if (arrA[e] < arrB[g]) {
			arrC[d] = arrA[e];
			e++;
		}
		else {
			arrC[d] = arrB[g];
			g++;
		}
		d++;
	}
	while (e < x) {
		arrC[d] = arrA[e];
		d++;
		e++;
	}
	while(g<v){
		arrC[d] = arrB[g];
		d++;
		g++;
	}
	return(arrC);
}
