//#include <stdlib.h>
//#include <stdio.h>
//
//typedef struct
//{ 
//	int school_numb;
//	int graduates;
//	int received; 
//	float percent;
//} school;
//
//void swap(int &first, int &second)
//{w
//    int tmp = first;
//    first = second;
//    second = tmp;
//}
//
//void SortByInx(school *arr, int size, int *&indexarr)
//{
//    for (int i = 0; i < size; i++)
//    {
//        indexarr[i] = i;
//    }
//
//	for (int step = 0; step < size - 1; ++step) 
//	{
//		for (int i = 0; i < size - step - 1; ++i) 
//		{
//			if (arr[i].percent > arr[i + 1].percent)
//			{
//                swap(indexarr[i], indexarr[i + 1]);
//			}
//		}
//	  }
//}
//
//void PrintStruct(school *arr, int size, int *indexarr)
//{
//    for (int i = 0; i < size; i++)
//    {
//        printf("\nSchool No: %d \tGraduated: %d \tPercent of entrants to the university: %.2f",
//																	arr[indexarr[i]].school_numb,
//																	arr[indexarr[i]].graduates,
//																	arr[indexarr[i]].percent);
//    }
//}
//
//int main()
//{
//	int size;
//	int *index;
//
//	scanf_s("%d", &size);
//	school *arr = new school[size];
//	index = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("\nEnter School No: "); 
//		scanf_s("%d", &arr[i].school_numb);
//
//		printf("Enter graduates No: "); 
//		scanf_s("%d", &arr[i].graduates);
//
//		printf("Enter receiced No: "); 
//		scanf_s("%d", &arr[i].received);
//
//
//		if (arr[i].graduates < arr[i].received)
//		{
//			return -1;
//		}
//
//		arr[i].percent = ((float)arr[i].received / (float)arr[i].graduates) * 100;
//
//	}
//
//	SortByInx(arr, size, index);
//	PrintStruct(arr, size, index);
//
//	return 0;
//}

#include <iostream>
#include <string>

struct dormitory
{
	int roomNumb;
	float square;
	std::string facultName;
	int livingIn;
};

void FacultCountAndWrite(dormitory *arr, int size, bool IsWrite, std::string index)		// Счётчик уникальных элементов string
{
	for (int i = 0; i < size; i++)
	{
		bool isUnique = false;

		for (int j = i + 1; j < size; j++)
		{
			if ((arr[i].facultName != arr[j].facultName))
			{
				isUnique = true;
			}
		}
		if (isUnique)
		{
			if (IsWrite)
			{
				// strcpy(&index[0], arr[0].facultName);							// Зачем я это написал 
				&index = arr[i].facultName.substr(0, 10);
			}
		}
	}
}

int main()
{
	int size;

	std::cin >> size;
	dormitory *arr = new dormitory[size];

	for (int i = 0; i < size; i++)
	{
		std::cout << "Room number: ";
		std::cin >> arr[i].roomNumb;
		std::cout << "Square: ";
		std::cin >> arr[i].square;
		std::cout << "Name of Facultet: ";
		std::cin >> arr[i].facultName;
		std::cout << "How many people live in: ";
		std::cin >> arr[i].livingIn;
	}

	int ** square_counter = new  int* [size];
	
	//for (int i = 0; i < size; i++)
	//{
	//	square_counter[i] = new  int[4];
	//
	//	for (int j = 0; j < 4; j++)
	//	{
	//		square_counter[i][j] = 2;
	//		printf("%d ", square_counter[i][j]);
	//	}
	//	printf("\n");
	//}

	std::string facult; // сделать массивом :)
	FacultCountAndWrite(arr, size, NULL, facult);


	for (int i = 0; i < size; i++)
	{ }

	std::cout << facult;

	return 0;
}