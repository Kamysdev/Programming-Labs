
////////////////////////////////////////////////////////////////////////
////////////////// Я просто ненавижу матрицы ///////////////////////////
////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
// 1

int main()
{
	int A[10][20], j, i, temp[20];

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
			printf("%4d", A[i][j]);
		printf("\n");
	}

	printf("\n\n\n\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (i % 2 == 0)
			{
				temp[j] = A[i][j];
				A[i][j] = A[i + 1][j];
			}
			if (i % 2 == 1)
			{
				A[i][j] = temp[j];
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 20; j++)
			printf("%4d", A[i][j]);
		printf("\n");
	}

	return 0;
}
*/

// 2

/*
const int N = 5;

int main()
{
	float matrix[N][N], sum[N];
	int count = 0, i, j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 10;
			printf("%.0f ", matrix[i][j]);
		}
		printf("\n");
		sum[i] = 0;
	}

	printf("\n\n");

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			sum[i] += matrix[i][j];
		}
	}


	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			matrix[i][j] = matrix[i][j] / sum[i];
			printf("%f ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// 3

/*
const int N = 5;

int main()
{
	int matrix1[N][N], matrix2[N][N];
	srand(2);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix1[i][j] = rand() % 10;
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix2[i][j] = matrix1[j][i];
		}
	}

	printf("\n\n\n\n");

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", matrix2[i][j]);
		}
		printf("\n");
	}


	return 0;
}
*/

const int N = 3;


/*
int main()
{
	int square[N][N] = { {5, 12, 7},{10, 8, 6},{9, 4, 11} }, flag = 0, temp, count = 0, sum = 0, tempflag = 0;
	srand(time(NULL));

	while (flag == 0)
	{
		if ((count == 1) || (count == 0))
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					square[i][j] = rand() % 10;
					// printf("%d ", square[i][j]);
				}
				// printf("\n");
			}
		}

		if (count == 2)
		{
			for (int j = 0; j < N; j++)
			{
				square[2][j] = rand() % 10;
				// printf("%d ", square[i][j]);
			}
		}

		count = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				sum += square[i][j];

				if (i == 0)
				{
					temp = sum;
				}


				if ((j == 2) && (sum == temp))
				{
					printf("\nsum is %d", sum);
					temp = sum;
					sum = 0;
					flag = 1;
					count++;
				}
				else
				{
					if (j != 0)
					{
					}
					if ((j == 2) && (sum != temp))
					{
						tempflag = 1;
						printf("\nWrong data");
					}
				}
			}
		}

		printf("\n");
		printf("%d", count);

		if (tempflag == 1)
		{
			flag = 0;
		}

		sum = 0; temp = 0; tempflag = 0;
		printf("\n");


		// Нужно сделать так, чтобы он проверял матрицу по вертикали и сбрасывал, если она не проходит 

	}

	printf("\n");

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", square[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/