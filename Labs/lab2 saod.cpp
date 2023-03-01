//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//
//int RunNumber(int *a, int n) 
//{
//	int k, count = 0;
//	for (int i = 0; i < n; i++, count++) {
//		for (k = 1; k < n - i && a[i + k - 1] > a[i + k]; k++);
//		i += k - 1;
//	}
//	return count;
//}
//
//void PrintMas(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Summ(int *arr, int n)
//{
//	int sum = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	printf("ArrSum: %d\n", sum);
//}
//
//int minpos(int *arr, int i, int n, int &C)
//{
//	int minimum = i;
//
//	for (int i = minimum; i < n; i++)
//	{
//		if (arr[i] < arr[minimum])
//		{
//			minimum = i;
//			C += 1;
//		}
//	}
//
//	return minimum;
//}
//
//int SelectSort(int* arr, int n)
//{
//	int temp, M = 0, C = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		int min = minpos(arr, i, n, C);
//		temp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = temp;
//		M += 3;
//	}
//
//	PrintMas(arr, n);
//	Summ(arr, n);
//	printf("RunNumber: %d\n", RunNumber(arr, n));
//	printf("M is: %d\n", M);
//	printf("C is: %d\n", C);
//
//	return 0;
//}
//
//int main()
//{
//	int* arr, n;
//	srand(time(NULL));
//	printf("Enter array lengthg: ");
//	scanf_s("%d", &n);
//	arr = new int [n];
//	if (arr == NULL)
//	{
//		return -1;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10000;
//	}
//	PrintMas(arr, n);
//	Summ(arr, n);
//	printf("RunNumber: %d\n", RunNumber(arr, n));
//	SelectSort(arr, n);
//
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//	PrintMas(arr, n);
//	Summ(arr, n);
//	printf("RunNumber: %d\n", RunNumber(arr, n));
//	SelectSort(arr, n);
//
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = n - i;
//	}
//	PrintMas(arr, n);
//	Summ(arr, n);
//	printf("RunNumber: %d\n", RunNumber(arr, n));
//	SelectSort(arr, n);
//
//	return 0;
//
//}