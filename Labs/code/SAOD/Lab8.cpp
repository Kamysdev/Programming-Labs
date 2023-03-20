#include <iostream>
using namespace std;

struct phone_book
{
	string name;
	string surname;
	string adress;
	double phone_number;
};

int BSearch2(int* arr, int size, int x) 
{
    &flag = 0;
    int L = 1;
    int R = size;

    while (L < R) 
    {
        &flag += 1;
        int m = (L + R) / 2;
        if (arr[m - 1] < x) 
        {
            L = m + 1;
        }
        else R = m;
    }

    if (arr[R - 1] == x) 
    {
        &flag += 1;
    }
    return &flag;
}

//void insertionSort(int *array, int size)
//{
//    for (int step = 1; step < size; step++)
//    {
//        int key = array[step];
//        int j = step - 1;
//        while (key < array[j] && j >= 0)
//        {
//            array[j + 1] = array[j];
//            --j;
//        }
//        array[j + 1] = key;
//    }
//}

int main()
{
	phone_book arr[4] = { {"David", "Davidson", "Moscow, Arbat street 16", 84925553535},
						{"Bob", "Stone", "Chimki, Youbeleyniy prospect 16", 849523358},
						{"Kelvin", "Joyner", "Togliatti, Dzerjisky street 11", 89879302800},
						{"Capybara", "Capybara", "Novosibirsk, Tymyryazeva street 71/1", 83833887258}};

	
    int ind_arr_namesort[4], ind_arr_adressort[4], flag;

    for (int i = 0; i < 4; i++)
    {
        ind_arr_namesort[4] = BSearch2()
    }

	return 0;
}