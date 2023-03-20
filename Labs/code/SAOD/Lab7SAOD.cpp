//#include <iostream>
//
//using namespace std;
//int flag1 = 0;
//int flag2 = 0;
//
//void BSearch1(int* arr, int size, int x) 
//{
//	int L = 1;
//	int R = size;
//	bool haveX = false;
//	while (L <= R) 
//	{
//		int m = (L + R) / 2;
//		if (arr[m - 1] == x) 
//		{
//			cout << "Exñelent!" << endl;
//			haveX = true;
//			break;
//		}
//
//		if (arr[m - 1] < x) 
//		{
//			L = m + 1;
//		}
//		else R = m - 1;
//		flag1 += 2;
//	}
//
//	if (!haveX) cout << "Bad!" << endl;
//}
//
//void BSearch2(int* arr, int size, int x) 
//{
//	int L = 1;
//	int R = size;
//	while (L < R) 
//	{
//		flag
//		int m = (L + R) / 2;
//		if (arr[m - 1] < x) 
//		{
//			L = m + 1;
//		}
//		else R = m;
//		flag2 += 2;
//	}
//	if (arr[R - 1] == x) 
//	{
//		cout << "Exelent!" << endl;
//	}
//	else cout << "Bad!" << endl;
//}
//
//
//void bubbleSort(int *array, int size) 
//{
//	for (int step = 0; step < size - 1; ++step) 
//	{
//		for (int i = 0; i < size - step - 1; ++i) 
//		{
//			if (array[i] > array[i + 1])
//			{
//				int temp = array[i];
//				array[i] = array[i + 1];
//				array[i + 1] = temp;
//			}
//		}
//	}
//}
//
//void fillRand(int* arr, int size) 
//{
//	srand(time(0));
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10 + 1;
//	}
//}
//
//void printMas(int* arr, int size) 
//{
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//void resetglobals(int &flag1, int &falg2)
//{
//	flag1 = 0; flag2 = 0;
//}
//
//int main() {
//	int size = 10;
//	int* arr = new int[size];
//	fillRand(arr, size);
//
//	bubbleSort(arr, size);
//
//	printMas(arr, size);
//
//	cout << endl;
//	int x;
//	cin >> x;
//	BSearch1(arr, size, x);
//	BSearch2(arr, size, x);
//	cout << flag1 << "\t" << flag2 << endl;
//
//
//
//
//	return 0;
//}