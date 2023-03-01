//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    int m, n, j, i;
//    float** matr; float* mass; // Объявляем matr – указатель на массив указателей                        
//    system("CLS");
//    printf("Введите размер строки n: "); scanf_s("%d", &n);
//    printf("Введите количество строк m: "); scanf_s("%d", &m);
//
//    mass = new  float[m]; // Выделяем память под массив сумм строк
//
//    matr = new  float* [m]; // Выделяем память под массив указателей
//
//    for (i = 0; i < m; i++)
//    {
//        matr[i] = new  float[n]; // Выделяем память под i-ю строку 
//
//        for (j = 0; j < n; j++)
//            matr[i][j] = rand() % 100;// Заполняем строку
//    }
//
//    for (i = 0; i < m; i++)
//    {
//        mass[i] = 0;
//        for (j = 0; j < n; j++)
//            mass[i] += matr[i][j]; //Помещаем сумму i-й строки в одномерный массив
//    }
//
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("\t%6.2f", matr[i][j]);
//        printf("\n");
//    }
//
//    for (i = 0; i < m; i++)
//        printf("\n  сумма %d строки %8.2f", i, mass[i]);
//    for (i = 0; i < m; i++)
//    {
//        delete  matr[i]; //Освобождаем память i-й строки
//        matr[i] = NULL;
//    }
//    delete  matr; // Освобождаем память массива указателей
//    matr = NULL;
//    delete  mass; // Освобождаем память массива сумм
//    mass = NULL;
//    
//    return 0;
//}