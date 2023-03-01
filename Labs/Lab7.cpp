#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1

/*
const int M = 58;
int main()
{
	float a, b, c, y, x1, x2, h, max;
	a = 2.14; b = -4.21; c = 3.25; x1 = -4.5; x2 = -33.5; h = 0.5; max = 62416236;

	float Func[M];
	int i, count, u;

	for (i = 0; x1 > x2; x1 -= h, i ++)
	{
		y = a * powf(x1, 2) + b * x1 + c;
		Func[i] = y;
	}

	for (i = 0; i < M - 1; i++)
	{
		for (u = M - 2; u >= i; u--)
		{
			if (Func[u] < Func[u + 1])
			{
				a = Func[u];
				Func[u] = Func[u + 1];
				Func[u + 1] = a;
			}
		}
	}

	for (i = 0; i < M; i++)
	{
		printf("%f\n", Func[i]);
	}

	return 0;
}
*/

// 2

/*
const int N = 15;

int main()
{
	int count, a, b, c, k, i;
	int arr[N], arr1[N];
	srand(time(NULL));

	// Задаем ранд, присваеваем значения второму массиву

	for (count = 0; count < N; count++)
	{
		arr[count] = rand() % 10;
		arr1[count] = arr[count];
		printf("%d ", arr[count]);
	}
	printf("\n");

	// убираем дублирующиеся значения из второго массива

	for (count = 0; count < N; count++)
	{
		for (i = 0; i < count; i++)
		{
			if ((arr[count] == arr[i]) && (count != i))
			{
				arr1[count] = 0;
			}

		}
	}


	for (count = 0; count < N; count++)
	{

		printf("%d ", arr1[count]);
	}

	return 0;
}
*/

// 3

/*
const int N = 20;

int main()
{
	int arrC[N], arrD[N], arrE[40], count, count1, a, b, flag;
	srand(time(NULL)); // "true" random


	for (count = 0; count < N; count++)
	{
		arrC[count] = rand() % 20;
		printf("%d ", arrC[count]);
	}
	printf("\n");

	for (count = 0; count < N; count++)
	{
		arrD[count] = rand() % 20;
		printf("%d ", arrD[count]);
	}


	for (count = 0; count < N - 1; count++)
	{
		for (count1 = N - 2; count1 >= count; count1--)
		{
			if (arrC[count1] > arrC[count1 + 1])
			{
				a = arrC[count1];
				arrC[count1] = arrC[count1 + 1];
				arrC[count1 + 1] = a;
			}
		}
	}

	for (count = 0; count < N - 1; count++)
	{
		for (count1 = N - 2; count1 >= count; count1--)
		{
			if (arrD[count1] > arrD[count1 + 1])
			{
				a = arrD[count1];
				arrD[count1] = arrD[count1 + 1];
				arrD[count1 + 1] = a;
			}
		}
	}
	printf("\n");
	printf("\n");

	for (count = 0; count < N; count++)
	{
		printf("%d ", arrC[count]);
	}
	printf("\n");
	for (count = 0; count < N; count++)
	{
		printf("%d ", arrD[count]);
	}
	printf("\n");
	printf("\n");

	count = 0; count1 = 0; a = 0; b = 0;



	while (b < 40)
	{
		flag = 0;

		if ((arrC[count] < arrD[count1]) && (flag == 0)) // 1-st
		{
			if (count == 20)
			{
				arrE[a] = arrC[count];
				a++;
				flag = 1;
				count1++;
			}
			else
			{
				arrE[a] = arrC[count];
				a++;
				count++;
				flag = 1;
			}
		}

		if ((arrD[count] < arrC[count1]) && (flag == 0)) // 2-nd
		{
			if (count1 == 20)
			{
				arrE[a] = arrD[count];
				a++;
				flag = 1;
				count++;
			}
			else
			{
				arrE[a] = arrD[count1];
				a++;
				count1++;
				flag = 1;
			}
		}

		if ((arrC[count] = arrD[count1]) && (flag == 0)) // 3-rd
		{
			arrE[a] = arrC[count];
			a++;
			count++;
			flag = 1;

		}
		b++;
	}



	for (count = 0; count < 40; count++)
	{
		printf("%d ", arrE[count]);
	}

	return 0;
}
*/