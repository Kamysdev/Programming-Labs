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

void FacultCountAndWrite(dormitory *arr, int size, std::string* index)		// —чЄтчик уникальных элементов string
{
	bool unique;

	for (int i = 0, count = 0; i < size; i++)
	{
		unique = true;
		for (int j = 0; j < index->size(); j++)
		{
			if (index[j] == arr[i].facultName)
			{
				unique = false;
			}
		}

		if (unique)
		{
			index[count] = arr[i].facultName;
			count++;
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

	std::string* facult = new std::string[size];			// сделать массивом :)
	FacultCountAndWrite(arr, size, facult);

	int roomcount = 0, studentscount = 0;
	float midsquare = 0;
	for (int i = 0; i < size; i++)
	{ 
		std::cout << "Name of facult: " << facult[i] << std::endl;
		for (int j = 0; j < size; j++)
		{
			if (arr[j].facultName == facult[i])
			{
				roomcount++;
				studentscount += arr[j].livingIn;
				midsquare += arr[j].square;
			}
		}

		midsquare /= studentscount;

		std::cout << "No of rooms: " << roomcount 
			<< "  No of students: " << studentscount 
			<< "  Mid square: " << midsquare << std::endl << std::endl;

		roomcount = 0;
		studentscount = 0;
		midsquare = 0;
	}

	return 0;
}