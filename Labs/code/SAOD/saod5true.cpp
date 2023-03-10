//#include <stdio.h>
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <locale.h>
//using namespace std;
//using std::cout;
//
//void FillRand (int *x, int n){ 
//srand(time(0));
//for(int i = 0; i < n; i++) x[i] = rand()%1000+1; 
//} 
//
//
//int flag1 = 0;
//int flag2 = 0;
//
//void clearglobals(){
//	flag1 = 0;
//	flag2 = 0;	
//}
// 
//void PrintMas (int *x, int n){ 
//for (int i = 0; i < n; i++) cout<<x[i]<<" "; 
//} 
//
//int RunNumber (int *x, int n) { 
//int k;
//int count = 0;
//for (int i = 0; i < n; i++, count++) { 
//for (k = 1; k < n-i && x[i+k-1] <= x[i+k]; k++); 
//i += k-1; 
//} 
//cout<<"series="<<count; 
//return count; 
//} 
//
//void CheckSum (int *x, int n){ 
//int count = 0;
//for (int i = 0; i < n; i++){ 
//count += x[i]; 
//} 
//cout<<"summ="<<count<<" "; 
//} 
//
//void SelectSort(int *x, int n)
//{
//int min, temp;
//for (int i = 0; i < n -1; i++){
//min = i;
//for (int j = i + 1; j < n; j++){
//	flag1 = flag1 + 1;
//	if (x[j] < x[min])
//	min = j;
//}
//temp = x[i];
//x[i] = x[min];
//x[min]=temp;
//flag2 =flag2 + 3;
//}
//}
//
//void bubbleSort(int array[], int size) {
//  for (int step = 0; step < size - 1; ++step) {
//    for (int i = 0; i < size - step - 1; ++i) {
//    	flag1++;
//      if (array[i] > array[i + 1]){
//        int temp = array[i];
//        array[i] = array[i + 1];
//        array[i + 1] = temp;
//        flag2 = flag2 + 3;
//	  }
//    }
//  }
//}
//
//void shakerSort(int array[], int size) {
//    for (int i = 0; i < size / 2; i++) {
//        bool swapped = false;
//        for (int j = i; j < size - i - 1; j++) 
//        { //туды
//            flag1++;
//            if (array[j] > array[j+1]) {
//                int tmp = array[j];
//                array[j] = array[j+1];
//                array[j+1] = tmp;
//                flag2 += 3;
//                swapped = true;
//                
//            }
//        }
//
//        for (int j = size - 2 - i; j > i; j--) 
//        { //сюды
//            if (swapped)
//            {
//                flag1++;
//            }
//            if (array[j] < array[j-1]) {
//                int tmp = array[j];
//                array[j] = array[j-1];
//                array[j-1] = tmp;
//                flag2 += 3;
//                swapped = true;
//            }
//        }
//        if(!swapped) break;
//    }
//}
//
//void InsertSort(int arr[],int n){
//	
//
//int i, key, j; 
//
//for (i = 1; i < n; i++)
//
//{ 
//
//key = arr[i]; 
//
//j = i - 1; 
//
//while (j >= 0 && arr[j] > key)
//
//{ 
//flag1 +=1;
//
//arr[j + 1] = arr[j]; 
//
//j = j - 1;
//
//flag2 += 1; 
//
//} 
//
//arr[j + 1] = key; 
//
//} 
//flag2 = flag2 - (n-1);
//} 
//
//void printArray(int arr[], int n) 
//{ 
//
//int i; 
//
//for (i = 0; i < n; i++) 
//
//cout << arr[i] << " "; 
//
//cout << endl;
//} 
//
//int main (){
//const int N = 10;
//int mas[N];
//	int Q = 100;
//    int* arr_q = new int[Q];
//    int W = 200;
//    int* arr_w = new int[W];
//    int E = 300;
//    int* arr_e = new int[E];
//    int R = 400;
//    int* arr_r = new int[R];
//    int T = 500;
//    int* arr_t = new int[T];
//FillRand(mas,N);
//cout<<"rand array before sort:"<<"\n";
//PrintMas(mas,N);
//cout<<"\n";
//CheckSum(mas,N);
//cout<<"\n";
//RunNumber(mas,N);
//InsertSort(mas,N);
//cout<<"\n"<<"rand array after insertion sort:";
//cout<<"\n";
//PrintMas(mas,N);
//cout<<"\n";
//CheckSum(mas,N);
//cout<<"\n";
//RunNumber(mas,N);
//cout<<"\n"<<"M :"<<flag1<<"   "<<"C :"<<flag2;
//    cout<<"\n";
//	cout<<"n          select          bubble          shaker          insert";
//	clearglobals();
//	FillRand(arr_q,Q);
//	SelectSort(arr_q,Q);
//	cout<<"\n"<<"100"<<"        "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_q,Q);
//	bubbleSort(arr_q,Q);
//	cout<<"            "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_q,Q);
//	shakerSort(arr_q,Q);
//	cout<<"           "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_q,Q);
//	InsertSort(arr_q,Q);
//	cout<<"           "<<flag1+flag2;
//	clearglobals();
//	///ok
//	FillRand(arr_w,W);
//	SelectSort(arr_w,W);
//	cout<<"\n"<<"200"<<"        "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_w,W);
//	bubbleSort(arr_w,W);
//	cout<<"           "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_w,W);
//	shakerSort(arr_w,W);
//	cout<<"           "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_w,W);
//	InsertSort(arr_w,W);
//	cout<<"           "<<flag1+flag2;
//	///ok
//	clearglobals();
//FillRand(arr_e,E);
//	SelectSort(arr_e,E);
//	cout<<"\n"<<"300"<<"        "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_e,E);
//	bubbleSort(arr_e,E);
//	cout<<"           "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_e,E);
//	shakerSort(arr_e,E);
//	cout<<"          "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_e,E);
//	InsertSort(arr_e,E);
//	cout<<"          "<<flag1+flag2;
//	///ok
//	clearglobals();
//	FillRand(arr_r,R);
//	SelectSort(arr_r,R);
//	cout<<"\n"<<"400"<<"        "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_r,R);
//	bubbleSort(arr_r,R);
//	cout<<"           "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_r,R);
//	shakerSort(arr_r,R);
//	cout<<"          "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_r,R);
//	InsertSort(arr_r,R);
//	cout<<"          "<<flag1+flag2;
//	///ok
//	clearglobals();
//	FillRand(arr_t,T);
//	SelectSort(arr_t,T);
//	cout<<"\n"<<"500"<<"        "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_t,T);
//	bubbleSort(arr_t,T);
//	cout<<"          "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_t,T);
//	shakerSort(arr_t,T);
//	cout<<"          "<<flag1+flag2;
//	clearglobals();
//	FillRand(arr_t,T);
//	InsertSort(arr_t,T);
//	cout<<"          "<<flag1+flag2;
//}
