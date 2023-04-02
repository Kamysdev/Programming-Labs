//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//#include <math.h>
//using namespace std;
//
//void BSearch1(int *arr, int size, int x, int &flag) {
//    flag = 0;
//    int L = 1;
//    int R = size;
//    bool haveX = false;
//    while (L <= R) {
//        flag += 2;
//        int m = (L + R) / 2;
//        if (arr[m - 1] == x) {
//            haveX = true;
//            break;
//        } 
//
//        if (arr[m - 1] < x) {
//            L = m + 1;
//        }
//        else R = m - 1;
//    }
//
//    cout << flag;
//}
//
//void BSearch2(int *arr, int size, int x, int &flag) {
//    flag = 0;
//    int L = 1;
//    int R = size;
//    while (L < R) {
//        flag += 1;
//        int m = (L + R) / 2;
//        if (arr[m - 1] < x) {
//            L = m + 1;
//        }
//        else R = m;
//    }
//    if (arr[R - 1] == x) {
//        flag += 1;
//    }
//    cout << flag;
//}
//
//void insertionSort(int *array, int size) {
//    for (int step = 1; step < size; step++) {
//        int key = array[step];
//        int j = step - 1;
//        while (key < array[j] && j >= 0) {
//            array[j + 1] = array[j];
//            --j;
//        }
//        array[j + 1] = key;
//    }
//}
//
//void fillRand(int *arr, int size) {
//    srand(time(0));
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 10000 + 1;
//    }
//}
//
//void printMas(int *arr, int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//}
//
//
//int main() {
//    int flag;
//    int size = 100;
//    int *arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//    printMas(arr, size);
//
//    cout << endl;
//    int x;
//
//    int flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//            }
//        }
//    }
//
//
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//    cout << "|   n   |\t\tCf 1.0 ver\t\t|\t\tCf 2.0 ver  \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//    cout << "|  100  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 200;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    
//
//    cout << "|  200  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 300;
//    arr = new int[size];
//    
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//
//    
//
//    cout << "|  300  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 400;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "|  400  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 500;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "|  500  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 600;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "|  600  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 700;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "|  700  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 800;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "|  800  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 900;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "|  900  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//    size = 1000;
//    arr = new int[size];
//    fillRand(arr, size);
//    insertionSort(arr, size);
//
//    flag6 = 0;
//    while (flag6 != 1)
//    {
//        x = rand() % 10000;
//        for (int i = 0; i < size; i++)
//        {
//            if (x == arr[i])
//            {
//                flag6 = 1;
//                i = size;
//            }
//        }
//    }
//
//    cout << "| 1000  |\t\t    "; BSearch1(arr, size, x, flag); cout << "    \t\t|\t\t    "; BSearch2(arr, size, x, flag); cout << "    \t\t|\n";
//    cout << "-----------------------------------------------------------------------------------------" << "\n";
//
//
//    return 0;
//}
