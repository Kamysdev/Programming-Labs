//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//#include <cmath>
//#include <locale>
//
//using namespace std;
//
//// Функция для вывода списка на экран
//template <typename T>
//void printList(vector<T>& list) {
//    for (auto item : list) {
//        cout << item << " ";
//    }
//    cout << endl;
//}
//// Функция для проверки, является ли число двухбайтовым
//bool isTwoByte(int number) {
//    return (number >= 0 && number <= 65535);
//}
//// Функция для проверки, является ли число четырехбайтовым
//bool isFourByte(int number) {
//    return (number >= 0 && number <= 4294967295);
//}
//// Функция для цифровой сортировки списка
//int M, C;
//template <typename T>
//void digitalSort(vector<T>& list) {
//    // Создаем 10 списков для каждой цифры
//    vector<T> buckets[10];
//    // Находим максимальное число в списке
//    T maxNumber = *max_element(list.begin(), list.end());
//    // Определяем количество цифр в максимальном числе
//    int digits = 0;
//    while (maxNumber > 0) {
//        //C++;
//        maxNumber /= 10;
//        digits++;
//    }
//    // Проходим по списку и распределяем числа по корзинам
//    for (int i = 0; i < digits; i++) {
//        for (auto item : list) {
//            // Получаем цифру числа справа на i-ой позиции
//            int digit = (int)(item / pow(10, i)) % 10;
//            // Добавляем число в соответствующую корзину
//            buckets[digit].push_back(item);
//            M+=3;
//        }
//        // Очищаем список и заполняем его отсортированными числами из корзин
//        list.clear();
//        for (int j = 0; j < 10; j++) {
//            list.insert(list.end(), buckets[j].begin(), buckets[j].end());
//            buckets[j].clear();
//        }
//    }
//}
//
//int decToBinary(int n) {
//    int binaryNum[32];
//    int binaryNum2 [32];
//    int bindigit = 0;
//    int mnoj=1;
//    int a = 0;
//    int i = 0;
//    int size = 0;
//    while (n > 0) {
//        binaryNum[i] = n % 2;
//        n = n / 2;
//        i++;
//    }
//    for (int j = i - 1; j >= 0; j--){
//        binaryNum2[a] = binaryNum[j];
//        a++;
//        size++;
//    }
//    for(size_t i =0 ; i < size; i++) {
//    bindigit+= binaryNum2[i]*mnoj;
//    mnoj*=10;
//    }
//    return bindigit;
//}
//
//int binaryToDecimal(long long n) {
//    int decimalNum = 0, i = 0, remainder;
//    while (n != 0) {
//        remainder = n % 10;
//        n /= 10;
//        decimalNum += remainder * pow(2, i);
//        i++;
//    }
//    return decimalNum;
//}
//
//int main() {
//
//    setlocale(LC_ALL, "ru-RU");
//    srand(time(NULL));
//    vector<int> list1 ;
//    vector<int> list2;
//    int digit;
//    for(int i=0;i<5;i++)
//    {
//        digit = rand() % 65535;
//        list1.push_back(digit);
//        digit = rand() % 4294967295;
//        list2.push_back(digit);
//    }
//    // Тестирование функции для двухбайтовых чисел
//    cout << "Stok list 1 (2 bite) : " << endl;
//    printList(list1);
//    cout << endl;
//    cout << "Sorted list 1 (pryamoi poryadok): " << endl;
//    digitalSort(list1);
//    printList(list1);
//    cout<<"\n"<< "M + C : " << M+C << endl;
//    M=0;
//    C=0;
//    cout << "\nSorted list 1 (obratniy poryadok): " << endl;
//    reverse(list1.begin(), list1.end());
//    digitalSort(list1);
//    reverse(list1.begin(), list1.end());
//    printList(list1);
//    cout<<"\n"<< "M + C : " << M+C << endl;
//    M=0;
//    C=75;
//
//    cout << endl << "----------------------------------------------------" << endl;
//
//    // Тестирование функции для четырехбайтовых чисел
//    cout << "\nStok list 2 (4bite) : " << endl;
//
//    printList(list2);
//
//    cout << endl;
//    cout << "Sorted list 2 (pryamoi poryadok): " << endl;
//
//    digitalSort(list2);
//    printList(list2);
//
//    cout<<"\n"<< "M + C : " << M+C << endl;
//    cout << endl;
//    M=75;
//    C=0;
//
//    cout << "Sorted list 2 (obratniy poryadok): " << endl;
//
//    reverse(list2.begin(), list2.end());
//    digitalSort(list2);
//    reverse(list2.begin(), list2.end());
//    printList(list2);
//
//    cout<<"\n"<< "M + C : " << M+C << endl;
//    cout << endl;
//
//    return 0;
//}