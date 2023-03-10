//#include <stdlib.h>
//#include <stdio.h>
//#include <iostream>
//#include <math.h>
//using namespace std;
//
///*
////1
//void calculate_triangle(int a_side, int b_side, int c_side, int *perim, int *square, int *flag)
//{
//	if (((a_side + b_side > c_side) && (a_side + c_side > b_side) && (b_side + c_side > a_side)) && ((a_side > 0) && (b_side > 0) && (c_side > 0)))
//	{
//		*perim = a_side + b_side + c_side;
//		*square = (a_side * b_side) / 2;
//	}
//	else
//	{
//		printf("Eblan");
//		*flag = 0;
//	}
//}
//
//
//int main()
//{
//	int a, b, c, perim, square, flag = 1;
//
//	cout << "Enter triangle sides ";
//	cin >> a >> b >> c;
//	calculate_triangle(a, b, c, &perim, &square, &flag);
//
//	if (flag == 1)
//	{
//		cout << "Perimeter = " << perim << endl;
//		cout << "Square = " << square << endl;
//	}
//	else
//	{
//		return 0;
//	}
//}*/
//
////2
//
//long double fact(int N)
//{
//	if (N < 0)
//	{
//		return 0;
//	}
//
//	if (N == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return N * fact(N - 1);
//	} 
//}
//
//void decide_who(float p, float q, int n, int m, long double *girl_chances, long double *boy_chances)
//{
//
//	*girl_chances = (fact(n) / (fact(m) * (fact(n) - fact(m))) * pow(p, m) * pow(q, n-m));
//	*boy_chances = (fact(n) / (fact(m) * (fact(n) - fact(m))) * pow(q, m) * pow(p, n - m));
//}
//
//
//int main()
//{
//	long double p = 0.45, q = 1 - p, girl_chances, boy_chances;
//	int n, m;
//
//	cout << "Enter children amount " << endl;
//	cin >> n;
//	if (n <= 0)
//	{
//		cout << "Eblan";
//		return -1;
//	}
//	else
//	{
//		decide_who(p, q, n, m, &girl_chances, &boy_chances);
//	}
//
//	cout << "Girl chances are " << girl_chances << endl;
//	cout << "Boy chances are  " << boy_chances << endl;
//
//	return 0;
//}