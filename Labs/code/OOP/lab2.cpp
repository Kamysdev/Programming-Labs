//#include <iostream>
//
//void PrintMatrix(int** matrix, int* index, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < index[i]; j++)
//		{
//			std::cout << matrix[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}
//}
//
//void GetRandomMatrix(int** matrix, int* index, int size)
//{
//	int temprand = rand() % 100;
//	int temp{};
//	srand(time(NULL) + temprand);
//
//	for (int i = 0; i < size; i++)
//	{
//		temp = rand() % 10;
//		matrix[i] = new int[temp];
//		index[i] = temp;
//
//		for (int j = 0; j < index[i]; j++)
//		{
//			matrix[i][j] = rand() % 50;
//		}
//	}
//}
//
//int main()
//{
//	srand(time(NULL));
//
//	int n, count = 0;;
//	std::cin >> n;
//	int** matrix = new int*[n];
//	int* arr = new int[n];
//
//	GetRandomMatrix(matrix, arr, n);
//	PrintMatrix(matrix, arr, n);
//
//	return 0;
//}