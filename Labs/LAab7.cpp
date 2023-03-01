#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int reset(int *arr, int size)
//{
//	int min1 = 101, min2 = 101, temp1 = -1, temp2 = -2;
//
//	for (int i = 0; i < size; i++)
//	{
//		if ((min1 >= arr[i]) && (i != temp2))
//		{
//			min1 = arr[i];
//			temp1 = i;
//		}
//		if ((min2 >= arr[i]) && (i != temp1))
//		{
//			min2 = arr[i];
//			temp2 = i;
//		}
//	}
//
//	if (temp1 > temp2)
//	{
//		min1 = temp1;
//		temp1 = temp2;
//		temp2 = min1;
//	}
//
//	for (int i = temp1 + 1; i < temp2; i++)
//	{
//		arr[i] = 0;
//	}
//
//	return *arr;
//}
//
//int main()
//{
//	int *arr, n;
//	srand(time(NULL));
//
//	scanf_s("%d", &n);
//	arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 100;
//		printf("%d ", arr[i]);
//	} 
//
//	reset(arr, n);
//
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int RandLong()
//{
//	char flag = 1, size;
//	while (flag)
//	{
//		size = rand() % 10;
//		if ((size >= 2) && (size <= 10))
//		{
//			flag = false;
//		}
//	}
//
//	return size;
//}
//
//int main()
//{
//	int **arr, n, sum; 
//	srand(time(NULL));
//	n = RandLong();
//
//	arr = new  int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new  int[n];
//		arr[i][0] = n;
//		sum = 0;											// Изменить в случае, если длинну строки, указанную в 0 элементе, нужно также считать в сумме
//		printf("%d ", arr[i][0]);
//		for (int j = 1; j < n; j++)
//		{
//			arr[i][j] = rand() % 100;
//			printf("%d ", arr[i][j]);
//			sum += arr[i][j];
//		}
//		printf("\tsum: %d\n", sum);
//	}
//
//	return 0;
//}


//void FillRand(int* x, int n)
//{
//	srand(time(0));
//	for (int i = 0; i < n; i++)
//	{
//		x[i] = rand() % 10000 + 1;
//	}
//}
//
//void PrintMas(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int SelectSearch(int* arr, int n, int a)
//{
//	int M = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		M++;
//		if (arr[i] == a)
//		{
//			return M;
//		}
//	}
//
//	return -1;
//}
//
//int BinarSearch(int* arr, int n, int a)
//{
//	int left = 0, right = n, search = -1, m = 0;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a == arr[mid]) 
//		{
//			search = mid;
//			break;
//		}
//		m++;
//		if (a < arr[mid])
//			right = mid - 1;
//		else
//			left = mid + 1;
//	}
//	return m;
//}
//
//void ShakerSort(int* array, int size)
//{
//	for (int i = 0; i < size / 2; i++)
//	{
//		bool swapped = false;
//		for (int j = i; j < size - i - 1; j++)
//		{
//			if (array[j] > array[j + 1])
//			{
//				int tmp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = tmp;
//				swapped = true;
//			}
//		}
//
//		for (int j = size - 2 - i; j > i; j--)
//		{
//			if (array[j] < array[j - 1])
//			{
//				int tmp = array[j];
//				array[j] = array[j - 1];
//				array[j - 1] = tmp;
//				swapped = true;
//			}
//		}
//		if (!swapped) break;
//	}
//}
//
//int main()
//{
//	int *arr, n, a, m = 0;
//
//	n = 100;
//	arr = new int[n];
//	FillRand(arr, n);
//	ShakerSort(arr, n);
//	PrintMas(arr, n);
//
//	scanf_s("%d", &a);
//	printf("SelectSearch M is: %d\n", SelectSearch(arr, n, a));
//	printf("BinarSearch M is: %d\n", BinarSearch(arr, n, a));
//	arr = NULL;
//
//	printf("\n");
//
//	n = 1000;
//	arr = new int[n];
//	FillRand(arr, n);
//	ShakerSort(arr, n);
//	PrintMas(arr, n);
//
//	scanf_s("%d", &a);
//	printf("SelectSearch M is: %d\n", SelectSearch(arr, n, a));
//	printf("BinarSearch M is: %d\n", BinarSearch(arr, n, a));
//	arr = NULL;
//
//	return 0;
//}