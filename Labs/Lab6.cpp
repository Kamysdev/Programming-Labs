#include <math.h>
#include <stdio.h>
#include <iostream>	

// 1

/*
const int N = 20;
int random(int N)
{
	return rand() % N;
}

int main()
{
	int i, A[N], a, b; a = -10; b = 10;

	for (i = 0; i < N; i++)
	{
		A[i] = random(b - a + 1) + a;
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	
	printf("\n\nNeggative:\n");
	for (i = 0; i < N; i++)
	{
		if (A[i] < 0)
		{
			printf("%d ", A[i]);
		}
	}

	printf("\n\nPositive:\n");
	for (i = 0; i < N; i++)
	{
		if (A[i] > 0)
		{
			printf("%d ", A[i]);
		}
	}

	return 0;
}
*/

// 2

/*
const int N = 100;

int main()
{
	int  n, count, count1, count2, count3, btw, Pni, Pn, Pi; 
	count = 0;  printf("Enter n: "); scanf_s("%d", &n);
	int C[N];

	for (Pn = 1, count1 = n; count1 > 0; count1--)
	{
		Pn = Pn * count1;
	}

	while (count <= n)
	{
		count++;
		for (Pi = 1, count2 = count; count2 > 0; count2--)
		{
			Pi = Pi * count2;
		}

		btw = n - count;

		for (Pni = 1, count2 = btw; count2 > 0; count2--)
		{
			Pni = Pni * count2;
		}

		C[count] = Pn / (Pi * Pni);
	}


	for (count3 = 1; count3 < n + 1 ; count3++)
	{
		printf("%d ", C[count3]);
	}

	return 0;
}
*/

// 3

/*
const int M = 16;

int main()
{
	int count, n, n1, p; n = 0; n1 = 0;
	int Numb[M] = { 4, 2, 7, 6, 4, 4, 0, 0, 1, 3, 3, 6, 1, 5, 1, 1 };
	for (count = 0; count < M; count++)
	{
		if (count % 2 == 1)
		{
			n = n + Numb[count];
		}
		if (count % 2 == 0)
		{
			p = 2 * Numb[count];
			if (p > 9)
			{
				p = p - 9;
			}
			n1 = n1 + p;
		}
	}

	n = n + n1;
	if (n % 10 == 0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

	return 0;
}
*/