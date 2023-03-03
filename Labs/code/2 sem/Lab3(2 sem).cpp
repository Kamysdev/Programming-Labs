

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void FillSize (int *arr, int size, int &m, int &k)
//{
//	srand(time(0));
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 100 - 50;
//		if (arr[i] < 0)
//		{
//			m++;
//		}
//		else
//		{
//			k++;
//		}
//	}
//}
//
//void PrintMas (int *arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n\n");
//}
//
//int main()
//{
//	int *b, *c, *d;
//	int n, m = 0, k = 0;
//
//	scanf_s("%d", &n);
//
//	b = (int*)malloc(n * sizeof(int));
//	FillSize(b, n, m, k);
//	
//	c = (int*)malloc(m * sizeof(int));
//	d = (int*)malloc(k * sizeof(int));
//
//	int ic = 0, id = 0;
//
//	for (int i = 0, ic = 0, id = 0; i < n; i++){
//		if (b[i] < 0)
//		{
//			c[ic] = b[i];
//			ic++;
//		}
//		else
//		{
//			d[id] = b[i];
//			id++;
//		}
//	}
//
//	PrintMas(b, n);
//	PrintMas(c, m);
//	PrintMas(d, k);
//
//	return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void arrprint(int a, int count, int n)
//{
//	printf("%d ", a);
//	if (count == (n - 1))
//		printf("\n");
//}
//
//int main()
//{
//	int n, temp, *a, *b;
//	srand(time(NULL));
//
//	printf("Enter the size of arr a & b: ");
//	scanf_s("%d", &n);
//	a = new int [n];
//	b = new int [n];
//
//	if ((a || b) == NULL)
//	{
//		return -1;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = rand() % 20 - 10;
//		b[i] = i + 1;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		arrprint(a[i], i, n);
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		arrprint(b[i], i, n);
//	}
//
//
//	for (int i = 1; i < n; ++i)
//	{
//		for (int j = 1; j < n; ++j)
//		{
//			if (a[j] < a[j - 1])
//			{
//				temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//
//				temp = b[j];
//				b[j] = b[j - 1];
//				b[j - 1] = temp;
//			}
//		}
//	}
//
//
//	printf("\n");
//	for (int i = 0; i < n; ++i)
//	{
//		arrprint(a[i], i, n);
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		arrprint(b[i], i, n);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	int n, *arr, flag = 0;
//
//	while (flag == 0)
//	{
//		printf("Enter N: ");
//		scanf_s("%d", &n);
//		if (n >= 2)
//		{
//			flag = 1;
//		}
//		else
//		{
//			printf("U are stupid\n");
//		}
//	}
//	arr = new int[n + 1];
//
//	for (int i = 0; i < n + 1; ++i)
//	{
//		arr[i] = i;
//	}
//
//	for (int i = 2; i < n + 1; ++i)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//			for (int j = powf(i, 2); j < n + 1; j += i)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//
//	return 0;
//}
