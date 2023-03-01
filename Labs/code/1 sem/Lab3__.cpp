//#include <math.h>
//#include <stdio.h>
//#include <iostream>	
//
//// 1
//
//
//
//int main() 
//{
//
//	int k, m, y; m = 0; k = 0; y = 0;
//	
//	
//	while (k == 0) 
//	{
//		printf("Type No of month: "); scanf("%d", &m);
//		
//		if ((m < 1) || (m > 12)) 
//		{
//			printf("Uncorrect month\n\n\n");
//			break;
//		}
//		if ((m > 0) && (m <= 12))
//		{
//		    k ++;
//		}
//	}
//	
//	
//	printf("\nMonth %d\n", m);
//	switch(m)
//	{
//		case 1: case 2: printf("Winter, 1-st quarter"); 
//			break;
//		
//		case 3: printf("Spring, 1-st quarter");
//			break;
//			
//		case 4: case 5: printf("Spring, 2-nd quarter");			break;
//		
//		case 6: printf("Summer, 2-nd quarter");
//		 	break;
//			 
//		case 7: case 8: printf("Summer, 3-rd quarter");
//			break;
//		
//		case 9: ("Autumn, 3-rd quarter");
//			break;
//			
//		case 10: case 11: printf("Autumn, 4-th quarter");
//			break;
//			
//		case 12: printf("Winter, 4-th quarter");
//			break;
//		
//		default: printf("Error");
//			break;
//		
//	}
//	
//	return 0;
//}
//
//
//
////2
//
///*
//
//int main()
//{	
//	int numb;
//	
//	printf("Enter the temperature from -9 to 9: "); //For europian only!
//	scanf("%d ", &numb);
//	
//	if (numb <= 0)
//	{
//		numb = abs(numb) + 10;
//	}
//	
//	printf("\n\n\nThe temperature in this room is ");
//	
//	switch(numb)
//	{
//		case 1: printf("positive one");
//			break;
//			
//		case 2: printf("positive two");
//			break;
//			
//		case 3: printf("positive three");
//			break;
//			
//		case 4: printf("positive four");
//			break;
//			
//		case 5: printf("positive five");
//			break;
//			
//		case 6: printf("positive six");
//			break;
//			
//		case 7: printf("positive seven");
//			break;
//			
//		case 8: printf("positive eight");
//			break;
//			
//		case 9: printf("positive nine (Hitler alert)");
//			break;
//			
//		case 10: printf("zero");
//			break;
//			
//		case 11: printf("negative one");
//			break;
//			
//		case 12: printf("negative two");
//			break;
//			
//		case 13: printf("negative three");
//			break;
//			
//		case 14: printf("negative four");
//			break;
//			
//		case 15: printf("negative five");
//			break;
//			
//		case 16: printf("negative six");
//			break;
//			
//		case 17: printf("negative seven");
//			break;
//			
//		case 18: printf("negative eight");
//			break;
//			
//		case 19: printf("negative nine (Hitler alert X2)");
//			break;
//			
//	}
//	
//	printf(". We are recommend to turn on gas heater, \nif you understand what do we mean ;)");
//	
//	return 0;
//}
//
//*/
//
////3
//
///*
//
//int main()
//{
//	int year; // 2008 год крысы
//	printf("Enter an year: "); scanf_s("%d ", &year);
//	while ((year < 2008) || (year > 2019))
//	{
//		if (year < 2008)
//		{
//			year = year + 12;
//		}
//		else
//		{
//			year = year - 12;
//		}
//	}
//	printf("\nThis year of ");
//	switch(year)
//	{
//		case 2008: printf("rat");
//			break;
//
//		case 2009: printf("cow");
//			break;
//
//		case 2010: printf("tiger");
//			break;
//
//		case 2011: printf("bunny");
//			break;
//
//		case 2012: printf("dragon");
//			break;
//
//		case 2013: printf("snake");
//			break;
//
//		case 2014: printf("horse");
//			break;
//
//		case 2015: printf("sheep");
//			break;
//
//		case 2016: printf("monkey");
//			break;
//
//		case 2017: printf("cock (Artem Demenev's year)");
//			break;
//
//		case 2018: printf("dog");
//			break;
//
//		case 2019: printf("pig");
//			break;
//
//		default: printf("Error");
//			break;
//	}
//			
//	return 0;
//}
//
//*/
//
//// 4
//
///*
//int main()
//{
//	
//	int m, d, t, n, ns, nv, nvs, S; n = 0; ns = 0; nv = 0; nvs = 0; m = 0; // n - 31 days, ns - 30 days, nv - 29 days, nvs - 28 days
//	
//
//	while ((m > 12) || (m < 1) || (d < 1) || (d > 32))
//	{
//		printf("Enter No of day, month, year: ");
//		scanf_s("%d%d%d", &d, &m, &t);
//		
//		if ((m > 0) && (m < 13))
//		{
//			if (t % 4 != 0)
//			{
//				nvs = 1;				
//			}
//			if (t % 4 == 0)
//			{
//				nv = 1;
//			}
//
//			
//			switch (m)
//			{
//				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//					if ((d > 0) && (d < 32))
//					{
//						n = 1;
//						switch (m)
//						{
//							case 1: 
//								S = d; printf("\n%d", S); break;
//							case 3: 
//								if (nv == 1) { S = 31 + 29 + d; printf("%d", S); break; } 
//								if (nvs == 1) { S = 31 + 28 + d; printf("%d", S); break; }
//							case 5:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + d; printf("%d", S); break; } 
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + d; printf("%d", S); break; }
//							case 7:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + 30 + d; printf("%d", S); break; } 
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + 30 + d; printf("%d", S); break; }
//							case 8:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + 30 + 31 + d; printf("%d", S); break; } 
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d; printf("%d", S); break; }
//							case 10:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d; printf("%d", S); break; } 
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d; printf("%d", S); break; }
//							case 12:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d; printf("%d", S); break; } 
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d; printf("%d", S); break; }		
//						}
//					}
//					else
//					{
//						printf("Error of entering day");
//						break;
//					}
//					break;
//					
//					
//				case 2:
//					if (((d > 29) && (t % 4 == 0)) || ((d > 28) && (t % 4 != 0)))
//					{
//						printf("Error of entering day");
//					}
//					else
//					{
//						S = 31 + d; printf("%d", S);
//					}
//					break;
//					
//				case 4: case 6: case 9: case 11:
//					if ((d > 0) && (d < 31))
//					{
//						switch (m)
//						{
//							case 4: 
//								if (nv == 1) { S = 31 + 29 + 31 + d; printf("%d", S); break; }
//								if (nvs == 1) { S = 31 + 28 + 31 + d; printf("%d", S); break; }
//							case 6:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + d; printf("%d", S); break; }
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + d; printf("%d", S); break; }
//							case 9:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + d; printf("%d", S); break; }
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d; printf("%d", S); break; }
//							case 11:
//								if (nv == 1) { S = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d; printf("%d", S); break; }
//								if (nvs == 1) { S = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d; printf("%d", S); break; }
//						}
//					}
//					else
//					{
//						printf("Error of entering day");
//						break;
//					}
//					break;
//			}
//		}
//		else
//		{
//			printf("Error entering month or day\n\n\n\n\n");
//		}	
//	}
//
//	return 0;
//}
//*/