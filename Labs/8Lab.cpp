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
//{
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

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//typedef struct
//{
//	int roomNumb;
//	float square;
//	char facultName[180];
//	int livingIn;
//} dormitory;
//
//int FacultCountAndWrite(dormitory *arr, int size, bool IsWrite, char* index)		// —чЄтчик уникальных элементов char
//{
//	int flag = 0, tempcount = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		bool isUnique = false;
//
//		for (int j = i + 1; j < size; j++)
//		{
//			if ((arr[i].facultName != arr[j].facultName))
//			{
//				isUnique = true;
//			}
//		}
//		if (isUnique)
//		{
//			if (IsWrite)
//			{
//				strcpy(&index[0], arr[0].facultName);
//
//				strcpy(&index[tempcount], arr[i].facultName);
//				strcpy(&index[tempcount + strlen(arr[i].facultName)], " ");
//				tempcount += strlen(arr[i].facultName) + 1;
//			}
//			flag += strlen(arr[i].facultName) + 1;
//		}
//		if (size == 1)
//		{
//			flag += strlen(arr[i].facultName) + 1;
//			if (IsWrite)
//			{
//				strcpy(&index[0], arr[0].facultName);
//			}
//		}
//	}
//
//	return flag;
//}
//
//int main()
//{
//	int size;
//
//	scanf_s("%d", &size);
//	dormitory *arr = new dormitory[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("\nRoom number: ");
//		scanf_s("%d", &arr[i].roomNumb);
//		printf("Square: ");
//		scanf_s("%f", &arr[i].square);
//		printf("Name of Facultet: ");
//		scanf_s("%s", arr[i].facultName, 10);
//		printf("How many people live in: ");
//		scanf_s("%d", &arr[i].livingIn);
//	}
//
//	int ** square_counter = new  int* [size];
//	
//	//for (int i = 0; i < size; i++)
//	//{
//	//	square_counter[i] = new  int[4];
//	//
//	//	for (int j = 0; j < 4; j++)
//	//	{
//	//		square_counter[i][j] = 2;
//	//		printf("%d ", square_counter[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	char* facult = new char [FacultCountAndWrite(arr, size, NULL, NULL)];
//	int IsComplited = FacultCountAndWrite(arr, size, true, facult);
//
//	for (int i = 0; i < size; i++)
//	{ }
//
//	printf(facult);
//
//	return 0;
//}