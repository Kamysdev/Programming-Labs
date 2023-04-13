//#include <iostream>
//#include <string>
//#include <functional>
//
//#define TT template<typename T>
//
//using namespace std;
//
//struct cellphone_book
//{
//    string name;
//    string surname;
//    string adress;
//    string number;
//};
//
//void swapt(int& a, int& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//void printArray(cellphone_book* arr, int* index)
//{
//    for (int i = 0; i < 4; i++)
//    {
//        cout << arr[index[i]].name << " "
//            << arr[index[i]].surname << " "
//            << arr[index[i]].adress << " "
//            << arr[index[i]].number << endl;
//    }
//}
//
//void selectSortName(cellphone_book* array, int* index)
//{
//    int size = 4;
//    for (int step = 0; step < size - 1; step++)
//    {
//        int min_idx = step;
//
//        for (int i = step + 1; i < size; i++)
//        {
//            if (array[index[i]].name < array[index[min_idx]].name)
//                min_idx = i;
//        }
//
//        swapt(index[min_idx], index[step]);
//    }
//}
//
//void selectSortNumber(cellphone_book* array, int* index)
//{
//    int size = 4;
//    for (int step = 0; step < size - 1; step++)
//    {
//        int min_idx = step;
//
//        for (int i = step + 1; i < size; i++)
//        {
//            if (array[index[i]].number < array[index[min_idx]].number)
//                min_idx = i;
//        }
//
//        swapt(index[min_idx], index[step]);
//    }
//}
//
//
//TT void selectSortUn(cellphone_book* array, int* index, function<T(cellphone_book)> getField)
//{
//    int size = 4;
//    for (int step = 0; step < size - 1; step++)
//    {
//        int min_idx = step;
//
//        for (int i = step + 1; i < size; i++)
//        {
//            if (getField(array[index[i]]) < getField(array[index[min_idx]]))
//                min_idx = i;
//        }
//
//        swapt(index[min_idx], index[step]);
//    }
//}
//
//int main()
//{
//
//    cellphone_book arr[4] =
//    {
//                                  {"Yang", "Xiao Long", "Vale, Beer str 15/2", "9879335752"},
//                                  {"Igor", "Sirotkin", "Voshod", "9993322332"},
//                                  {"Stepan", "Bebralovskiy", "Berdsk, Morskaya str 16/2", "8005553535"},
//                                  {"Ronald", "Mc'Donald", "Ohaio", "3333332332"}
//    };
//
//    int arr1[4] = { 0, 1, 2, 3 },
//        arr2[4] = { 0, 1, 2, 3 };
//
//    printArray(arr, arr1);
//
//    for (int i = 0; i < 4; i++)
//    {
//        cout << arr1[i] << " ";
//    }
//
//    selectSortUn<string>(arr, arr1, [](cellphone_book d)
//        {
//            return d.name;
//        });
//
//    cout << endl;
//
//    printArray(arr, arr1);
//
//    for (int i = 0; i < 4; i++)
//    {
//        cout << arr1[i] << " ";
//    }
//
//    selectSortUn<string>(arr, arr2, [](cellphone_book d)
//        {
//            return d.number;
//        });
//    // selectionSortNumber(arr, arr2);
//
//    cout << endl;
//
//    printArray(arr, arr2);
//
//    for (int i = 0; i < 4; i++)
//    {
//        cout << arr2[i] << " ";
//    }
//
//    cout << endl << endl;
//
//    return 0;
//}