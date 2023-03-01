#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
// 8 бригада


const int N = 1000;

int main()
{
	double I1, I2, I21, I22, a, b, h;
	int count;
	a = -2; b = 2; I1 = 0;  I2 = 0; I21 = 0; I22 = 0;
	h = (b - a) / N;
	double arr[N];


	for (count = 0; count < N; count++)
	{
		arr[count] = (1 + 2 * a + a * a) / (5 + 2 * a * a);
		a += h;
	}

	for (count = 0; count < N; count++)
	{
		if ((count == 0) || (count == N - 1))
		{
			I1 += arr[count] / 2;
			I2 += arr[count];
		}
		else
		{
			I1 += arr[count];
			if (count % 2 == 1)
			{
				I21 += arr[count];
			}
			if (count % 2 == 0)
			{
				I22 += arr[count];
			}
		}
	}

	I1 *= h;
	I21 *= 4; I22 *= 2;
	I2 = (h / 3) * (I2 + I21 + I22);

	printf("%f\n", I1);
	printf("%f", I2);

	return 0;
}
*/