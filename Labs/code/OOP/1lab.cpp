#include <iostream>
#include <string>
// #1
//int *genRandArray(int size, int maxValue)
//{
//	int *temparr = new int[size];
//	temparr[0] = size - 1;
//
//	for (int i = 1; i < size; i++)
//	{
//		temparr[i] = rand() % maxValue;
//	}
//
//	return temparr;
//}
//
//void print(int* arr)
//{
//	std::cout << arr[0] << ": ";
//	for (int i = 1; i < arr[0] + 1; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//}
//
//int main()
//{
//	srand(time(NULL));
//	int size = rand() % 10;
//	int maxValue = 100;
//	int* arr = genRandArray(size, maxValue);
//	print(arr);
//
//	return 0;
//}
// #2

//int** genRandMatrix(int size, int maxValue)
//{
//	int **temparr = new int*[size];
//	int newgen = 0;
//
//	temparr[0] = new int[1];
//	temparr[0][0] = size;
//
//	for (int i = 1; i < size + 1; i++)
//	{
//		newgen += rand() % 66;
//		srand(time(NULL) + newgen);
//
//		int tempsize = (rand() % 8) + 2;
//		temparr[i] = new int[tempsize];
//		temparr[i][0] = tempsize - 1;
//	}
//	
//
//	for (int i = 1; i < temparr[0][0]; i++)
//	{
//		for (int j = 1; j < temparr[i][0] + 1; j++)
//		{
//			temparr[i][j] = rand() % maxValue;
//		}
//	}
//	temparr[0][0] = size - 1;
//
//	return temparr;
//}
//
//void print(int** arr)
//{
//	std::cout << arr[0][0];
//	for (int i = 1; i < arr[0][0] + 1; i++)
//	{
//		std::cout << std::endl << arr[i][0] - 1<< ": ";
//		for (int j = 1; j < arr[i][0]; j++)
//		{
//			std::cout << arr[i][j] << " ";
//		}
//	}
//}
//
//int main()
//{
//	srand(time(NULL));
//	int size = rand() % 10;
//	int maxValue = 100;
//	int** matrix = genRandMatrix(size, maxValue);
//	print(matrix);
//
//	return 0;
//}