//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <locale.h>
//
//struct Notebook
//{
//	char secondName[20];
//	char phoneNumber[20];
//	char birthdate[10];
//
//	Notebook() = default;
//} myNotebook;
//
//int input(const char* name)
//{
//	char ch;
//	FILE* tf;
//	tf = fopen(name, "wb");
//	if (tf == NULL)
//	{
//		return -1;
//	}
//	system("CLS");
//	printf("\n Entering a contact \n");
//	do
//	{
//		printf("\n Surname: "); scanf("%s", myNotebook.secondName);
//		printf(" Phone number: "); scanf("%s", myNotebook.phoneNumber);
//		printf(" Date of birth: "); scanf("%s", myNotebook.birthdate);
//		fwrite(&myNotebook, sizeof(myNotebook), 1, tf); // запись в файл одной структуры myNotebook
//		printf("\n End?  y/n  ");
//		ch = _getch();
//	} while (ch != 'y');
//	fclose(tf);
//
//	return 0;
//}
//
//int print(const char* name) // просмотр файла
//{
//	int i; FILE* tf;
//	system("CLS");
//	tf = fopen(name, "rb"); // открытие бинарного файла для чтения
//	if (tf == NULL)
//	{
//		return -1;
//	}
//	i = 1;
//
//	for (int i = 0; fread(&myNotebook, sizeof(myNotebook), 1, tf) == 1; i++)
//	{
//		printf("\n  %3d Second name  %20s, Phone number %20s, birthdate %10s \n",
//			i,
//			myNotebook.secondName,
//			myNotebook.phoneNumber,
//			myNotebook.birthdate);
//	}
//
//	system("Pause");
//
//	fclose(tf);
//
//	return 0;
//}
//
//int app(const char* name) // добавление в файл
//{
//	FILE* tf;
//
//	char ch{};
//	char* str{};
//	char* final_str{};
//
//	tf = fopen(name, "ab"); // открытие бинарного файла для добавления
//	if (tf == NULL)
//	{
//		return -1;
//	}
//	system("CLS");
//	printf("\n  Entering a contact \n");
//
//	printf("\n Surname: "); scanf("%s", myNotebook.secondName);
//	printf(" Phone number: "); scanf("%s", myNotebook.phoneNumber);
//	printf(" Date of birth: "); scanf("%s", myNotebook.birthdate);
//
//	char c{};
//	while ((c = getc(tf)) != EOF)
//	{
//		*final_str += c;
//	}
//
//	fseek(tf, 0, SEEK_SET);
//	fwrite(&myNotebook, sizeof(myNotebook), 1, tf);
//	fwrite(&final_str, sizeof(final_str), 1, tf);
//
//	fclose(tf);
//
//	return 0;
//}
//
//int find(const char* name)
//{
//	char c{}, Notebook[10]{}; FILE* tf;
//	tf = fopen(name, "rb+");
//	if (tf == NULL)
//	{
//		return -1;
//	}
//
//	printf("Product to search for: ");
//	scanf("%s", &Notebook);
//	fread(&myNotebook, sizeof(myNotebook), 1, tf);
//
//	while (true)
//	{
//		if (strcmp(myNotebook.secondName, Notebook) != 1)
//		{
//			system("CLS");
//			printf("\nSecond name %s Phone number %s Birthdate %s",
//				myNotebook.secondName,
//				myNotebook.phoneNumber,
//				myNotebook.birthdate);
//
//			printf("\n Continue? y/n ");
//			if (_getch() == 'y')
//			{
//				printf("\n Phone number: ");
//				scanf("%s", myNotebook.phoneNumber);
//				printf("\n Birthdate: ");
//				scanf("%s", myNotebook.birthdate);
//
//				fseek(tf, sizeof(myNotebook), 1);
//				fwrite(&myNotebook, sizeof(myNotebook), 1, tf);
//				fflush(tf);
//				break;
//			}
//		}
//		fread(&myNotebook, sizeof(myNotebook), 1, tf);
//
//		if (feof(tf) == 1)
//		{
//			break;
//		}
//	}
//	fclose(tf);
//
//	return 0;
//}
//
//int main()
//{
//	while (1)
//	{
//		system("CLS");
//		printf(" 1 - creating a new file\n");
//		printf(" 2 - viewing a file\n");
//		printf(" 3 - adding to a file\n");
//		printf(" 4 - search and change\n");
//		printf(" 0 - exit\n");
//
//
//		switch (_getch())
//		{
//		case '1':
//			input("file1.dat");
//			break;
//		case '2':
//			print("file1.dat");
//			break;
//		case '3':
//			app("file1.dat");
//			break;
//		case '4':
//			find("file1.dat"); 
//			break;
//		case '0':
//			return 0;
//		default: 
//			break;
//		}
//	}
//
//	return 0;
//}