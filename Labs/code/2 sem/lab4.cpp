#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

//using namespace std;
//
//const int n = 5;
//
//void max_search_n_delete(int** matrix, int m)
//{
//	int maxi = 0, maxi_i, maxi_j;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (matrix[i][j] > maxi)
//			{
//				maxi = matrix[i][j];
//				maxi_i = i;
//				maxi_j = j;
//			}
//		}
//	}
//	
//	int** new_matrix = new int* [m-1];
//
//	for (int i = 0; i < m - 1; i++)
//	{
//		new_matrix[i] = new int[m - 1];
//	}
//
//	for (int i = 0, i1 = 0; i < m, i1 < m - 1; i++, i1++)
//	{
//		if (i == maxi_i)
//		{
//			i++;
//		}
//
//		for ( int j = 0, j1 = 0; j < n, j1 < n - 1; j++, j1++)
//		{
//			if (j == maxi_j)
//			{
//				j++;
//			}
//
//			new_matrix[i1][j1] = matrix[i][j];
//
//			printf("%d ", new_matrix[i1][j1]);
//		}
//
//		printf("\n");
//	}
//
//	new_matrix = NULL;
//}
//
//int main()
//{
//	int i, j, m;
//	srand(time(NULL));
//
//	printf("enter amount of lines ");
//	scanf_s("%d", &m);
//
//	int** matrix = new int* [m];
//
//	for (i = 0; i < m; i++)
//	{
//		matrix[i] = new int[m];
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			matrix[i][j] = rand() % 100;
//			printf("%d ", matrix[i][j]);
//		}
//		
//		printf("\n");
//	}
//
//	printf("\n");
//
//	max_search_n_delete(matrix, m);
//
//	matrix = NULL;
//	return 0;
//}
//
// 
// 
// 
int summa(int** arr, int size, int j)
{
	size--;
	int sum = 0;

	for (int i = 0; i < size + 1; i++)
	{
		sum += arr[i][j];
	}

	return sum;
}

void add_sum(int** matrix, int m, int n)
{
	int sum = 0;
	int** matrixb = new int* [m + 1];
	for (int i = 0; i < m + 1; i++)
	{
		matrixb[i] = new int[n + 1];

	}

	for (int i = 0; i < m + 1; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			matrixb[m][n] = 0;
			if ((j < n) && (i < m))
			{
				matrixb[i][j] = matrix[i][j];
				sum += matrixb[i][j];
			}
			if ((j == n) && (i < m))
			{
				matrixb[i][j] = sum;
				sum = 0;
			}
			if ((i == m) && (j != n))
			{
				matrixb[i][j] = summa(matrix, m, j);
			}

			if ((i != m) || (j != n))
			{
				printf("%d\t", matrixb[i][j]);
			}
			
		}


		printf("\n");
	}

}

int main()
{
	int m, n;

	printf("Enter amount of lines, then amount of rows \n");
	srand(time(NULL));
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	printf("\n");

	int** matrix = new int* [m];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = rand() % 100;
			printf("%d\t", matrix[i][j]);
		} 

		printf("\n");
	}

	printf("\n");
	add_sum(matrix, m, n);

	matrix = NULL;
	return 0; 
}