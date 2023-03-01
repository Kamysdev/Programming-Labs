#include <stdio.h>
#include <math.h>

// 1

/*
int main()
{
	float i, i2; i2 = 1;
	double x, tcn; x = 1; tcn = 1 * exp(1) - 3;
	int n = 1;
	
	do
	{
		i2 += 2;
		i = (1 / i2);
		if (n % 2 == 1)
		{
			i *= -1;
		}
		x = x + i;
		n ++;
	}while (1 / (2 * n + 1) > tcn);

	x *= 4;
	printf("%.5f", x);
    
   return 0;
}
*/

// 2

/*
int main()
{
	float y, x, x1, a, b, c, h, maxx, minx; a = 2.14; b = -4.21; c = 3.25; x = -4.5; h = 0.5; x1 = -13.5; maxx = -100000; minx = 100000;
	
	while (x >= x1)
	{	
		y = ((a * powf(x, 2)) + (b * x) + c) * sin(x);
		x -= h;
		if (y > maxx)
		{
			maxx = y;
		}
		if (y < minx)
		{
			minx = y;
		}
	}
	printf("%.3f\n%.3f", minx, maxx);
	
	return 0;
	
}
*/

// 3
// Ќайти и вывести простые числа и  их количество в диапазоне от 2 до n, n ввести с клавиатуры.

/*
int main()
{
	int i, n, p, mx, prog, x; n = 10000; i = 1; prog = 0; p = 2; x = 0;

	while (i < n)
	{
		i++;
		mx = 2;
		while (prog == 0)
		{
			if (p % mx != 0)
			{
				mx++;
			}

			if (p % mx == 0)
			{
				if (p == mx)
				{
					printf("%d ", p);
					prog = 1;
					x++;
				}
				if (p != mx)
				{
					prog = 1;
				}
			}
		}
		prog = 0;
		p++;
	}
	printf("\nTotally %d", x);
	return 0;
}
*/