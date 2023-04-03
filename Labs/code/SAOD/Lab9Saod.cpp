#include <iostream>

using namespace std;

void FillInc(int* x, int n) {
    for (int i = 0; i < n; i++) {
        x[i] = i + 1;
    }
}

void FillDec(int* x, int n) {
    for (int i = 0; i < n; i++) {
        x[i] = n - i;
    }
}

void FillRand(int* x, int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 10000 + 1;
    }
}

int CheckSum(int* a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];
    return sum;
}

int RunNumber(int* a, int size) {
    int count = 1;
    for (int i = 1; i < size; i++) {
        count = (a[i] < a[i - 1]) ? count + 1 : count;
    }
    return count;
}

void heapify(int arr[], int n, int i, int& flag1, int& flag2) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        flag1++;
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        flag1++;
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        flag2 += 3;
        heapify(arr, n, largest, flag1, flag2);
    }
}

void heapSort(int arr[], int n, int& flag1, int& flag2) {
    flag1 = 0; flag2 = 0;
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i, flag1, flag2);
    for (int i = n - 1; i >= 0; i--) {
        flag2 += 3;
        swap(arr[0], arr[i]);
        heapify(arr, i, 0, flag1, flag2);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int n, M, C, M1, C1, M2, C2;

    n = 100;
    int* arr = new int[n];
    FillRand(arr, n);
    printArray(arr, n);
    printf("\nControl Summ : %d", CheckSum(arr, n));
    printf("\nAmount of series : %d", RunNumber(arr, n));
    printf("\n\n");
    heapSort(arr, n, C, M);
    printArray(arr, n);
    printf("\nControl Summ : %d", CheckSum(arr, n));
    printf("\nAmount of series : %d", RunNumber(arr, n));

    FillInc(arr, n);
    heapSort(arr, n, C, M);
    FillDec(arr, n);
    heapSort(arr, n, C1, M1);
    FillRand(arr, n);
    heapSort(arr, n, C2, M2);

    printf("\n-------------------------------------------------------------------------------");
    printf("\n    n   |\t\t\t    HeapSort(M + S)\t\t              |");
    printf("\n        -----------------------------------------------------------------------");
    printf("\n\t|\t  inc\t      |\t\tdec\t      |\t\trad\t      |");
    printf("\n-------------------------------------------------------------------------------");
    printf("\n   100  |\t %d \t      |\t\t%d\t      |\t\t%d\t      |", M + C, M1 + C1, M2 + C2);
    printf("\n-------------------------------------------------------------------------------");

    n = 200;
    arr = new int[n];
    FillInc(arr, n);
    heapSort(arr, n, C, M);
    FillDec(arr, n);
    heapSort(arr, n, C1, M1);
    FillRand(arr, n);
    heapSort(arr, n, C2, M2);

    printf("\n   200  |\t %d \t      |\t\t%d\t      |\t\t%d\t      |", M + C, M1 + C1, M2 + C2);
    printf("\n-------------------------------------------------------------------------------");

    n = 300;
    arr = new int[n];
    FillInc(arr, n);
    heapSort(arr, n, C, M);
    FillDec(arr, n);
    heapSort(arr, n, C1, M1);
    FillRand(arr, n);
    heapSort(arr, n, C2, M2);

    printf("\n   300  |\t %d \t      |\t\t%d\t      |\t\t%d\t      |", M + C, M1 + C1, M2 + C2);
    printf("\n-------------------------------------------------------------------------------");

    n = 400;
    arr = new int[n];
    FillInc(arr, n);
    heapSort(arr, n, C, M);
    FillDec(arr, n);
    heapSort(arr, n, C1, M1);
    FillRand(arr, n);
    heapSort(arr, n, C2, M2);

    printf("\n   400  |\t %d \t      |\t\t%d\t      |\t\t%d\t      |", M + C, M1 + C1, M2 + C2);
    printf("\n-------------------------------------------------------------------------------");

    n = 500;
    arr = new int[n];
    FillInc(arr, n);
    heapSort(arr, n, C, M);
    FillDec(arr, n);
    heapSort(arr, n, C1, M1);
    FillRand(arr, n);
    heapSort(arr, n, C2, M2);

    printf("\n   500  |\t %d \t      |\t\t%d\t      |\t\t%d\t      |", M + C, M1 + C1, M2 + C2);
    printf("\n-------------------------------------------------------------------------------");

    cout << endl;
}