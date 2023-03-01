//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int GeneredArrA(int *arr, int &count, int size)
//{
//	if (count == size)
//	{
//		count = 0;
//	}
//	int element = arr[count];
//	count++;
//
//	return element;
//}
//
//int main()
//{
//	int m, k, flag = 0, count = 0;
//	srand(time(NULL));
//
//	printf("Enter M: ");
//	scanf_s("%d", &m);
//
//	while (flag != 1)
//	{
//		printf("Enter K: ");
//		scanf_s("%d", &k);
//		if (k >= m)
//		{
//			return -1;
//		}
//		else
//		{
//			flag = 1;
//		}
//	}
//
//	int* A = new int[m];
//	for (int i = 0; i < m; i++)
//	{
//		A[i] = rand() % 100;
//		printf("%d ", A[i]);
//	}
//	printf("\n\n");
//
//	int** B = new  int* [k];
//
//	for (int i = 0; i < k; i++)
//	{
//		B[i] = new  int[k];
//
//		for (int j = 0; j < k; j++)
//		{
//			B[i][j] = GeneredArrA(A, count, m);
//			printf("%d ", B[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int b, flag = 1, count = 0;
//
//	printf("Enter Arr size: ");
//	scanf_s("%d", &b);
//
//	int** A = new  int* [b];
//	for (int i = 0; i < b; i++)
//	{
//		A[i] = new  int [b];
//
//		for (int j = 0; j < b; j++)
//		{
//			A[i][j] = (j + 1) * (i + 1);
//			count++;
//			if (count <= flag)
//			{
//				printf("%d ", A[i][j]);
//			}
//			else
//			{
//				j = b;
//				count = 0;
//			}
//		}
//		flag++;
//		printf("\n");
//	}
//
//	return 0;
//}
