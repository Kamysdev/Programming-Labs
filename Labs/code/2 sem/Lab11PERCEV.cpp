//#define _CRT_SECURE_NO_WARNINGS
//
//#include <conio.h>
//#include <string>
//#include <locale>
//#include <iostream>
//
//using namespace std;
//
//struct passengersData
//{
//	std::string Name;
//	std::string Surname;
//	std::string Patronymic;
//	
//	int Occupated_places;
//	int Weight;
//	bool showhide;
//	
//	passengersData()
//	{
//		Name = "Bob";
//		Surname = "Bob";
//		Patronymic = "Bob";
//	
//		Occupated_places = 0;
//		Weight = 0;
//		showhide = true;
//	}
//} passengers;
//
//void input(const char* type)
//{
//    FILE* data = fopen("./code/2 sem/materials/passengerList.txt", type); // �������� ��������� ����� ��� ������
//    system("CLS");
//	cout << endl << "���� ����������" << endl;
//
//    do
//    {
//		cout << "Enter Name: ";
//		cin >> passengers.Name;
//		
//		cout << "Enter Surname: ";
//		cin >> passengers.Surname;
//		
//		cout << "Enter Patronymic: ";
//		cin >> passengers.Patronymic;
//		
//		cout << "Enter occupated baggege places: ";
//		cin >> passengers.Occupated_places;
//		
//		cout << "Enter weight of baggege: ";
//		cin >> passengers.Weight;
//
//        fwrite(&passengers, sizeof(passengers), 1, data); // ������ � ���� ����� ��������� data
//		cout << endl << "���������?  y/n";
//
//    } while (_getch() != 'y');
//
//    fclose(data);
//}
//
//void print()
//{
//    system("CLS");
//
//    FILE* data1 = fopen("./code/2 sem/materials/passengerList.txt",
//					"rb"); // �������� ��������� ����� ��� ������
//
//	for (int i = 1; fread(&passengers, sizeof(passengers), 1, data1); i++)
//	{
//		if (passengers.showhide == true)
//		cout << i << "\tName: " << passengers.Name << "\tSurname: "
//			<< passengers.Surname << "\tPatronymic: "
//			<< passengers.Patronymic << "\tBaggage: "
//			<< passengers.Occupated_places << "\tBaggage weight: "
//			<< passengers.Weight << endl;
//	}
//
//	fclose(data1);
//    system("pause");
//}
//
//void remove()
//{
//	FILE* tf4 = fopen("./code/2 sem/materials/passengerList.txt", "rb+"); // �������� ����� ��� ������ � ������
//
//	while(fread(&passengers, sizeof(passengers), 1, tf4))
//	{
//		if ((passengers.Weight < 10) && (passengers.showhide == true))
//		{
//			passengers.showhide = false;
//
//			fwrite(&passengers, sizeof(passengers), 1, tf4);
//		}
//	}
//
//    fclose(tf4);
//}
//
//void find()
//{
//	string tov; 
//	FILE* tf2 = fopen("file1.dat", "rb+"); // �������� ����� ��� ������ � ������
//
//	cout << "Find: ";
//	cin >> tov;
//
//	while (fread(&passengers, sizeof(passengers), 1, tf2))
//	{
//		if (passengers.Surname == tov)
//		{
//			cout << "\tName: " << passengers.Name << "\tSurname: "
//				<< passengers.Surname << "\tPatronymic: "
//				<< passengers.Patronymic << "\tBaggage: "
//				<< passengers.Occupated_places << "\tBaggage weight: "
//				<< passengers.Weight << endl;
//
//
//			printf("\n ����������? y/n ");
//			if (_getch() == 'y')
//			{
//				cout << endl << "Weight: ";
//				cin >> passengers.Weight;
//
//				fseek(tf2, sizeof(passengers), 1); // ������� �� ���� ������ � �����
//				fwrite(&passengers, sizeof(passengers), 1, tf2); // ����� � ���� ���������� ������
//				fflush(tf2);//������� ������� �����-������
//			}
//		}
//	}
//	
//
//	fclose(tf2);
//}
//
//int main_menu()
//{
//	std::cout << "\t Select mode of working with file" << std::endl;
//
//	std::cout << "1. Create file with N records" << std::endl
//		<< "2. See records in file" << std::endl
//		<< "3. Add record to the end of file" << std::endl
//		<< "4. Remove record about passenger with baggage < 10kg " << std::endl
//		<< "5. Change weight of baggage of passenger by their surname" << std::endl
//		<< "6. Exit" << std::endl;
//	
//	switch (_getch())
//	{
//		case 49:
//		{
//			return 1;
//			break;
//		}
//
//		case 50:
//		{
//			return 2;
//			break;
//		}
//
//		case 51:
//		{
//			return 3;
//			break;
//		}
//
//		case 52:
//		{
//			return 4;
//			break;
//		}
//		case 53:
//		{
//			return 5;
//			break;
//		}
//		case 54:
//		{
//			return 6;
//			break;
//		}
//
//		default:
//		{
//			system("CLS");
//			return main_menu();
//			break;
//		}
//	}
//}
//
//int main()
//{
//    setlocale(LC_ALL, "ru-RU");
//
//	int menustatus;
//
//	while (true)
//	{
//		if ((menustatus = main_menu()) == 6)
//		{
//			break;
//		}
//		system("CLS");
//
//		switch (menustatus)
//		{
//			case 1:
//			{
//				input("wb");
//				break;
//			}
//			case 2:
//			{
//				print();
//				break;
//			}
//			case 3:
//			{
//				input("ab");
//				break;
//			}
//			case 4:
//			{
//				remove();
//				break;
//			}
//			case 5:
//				find();
//				break;
//		}
//		system("CLS");
//	}
//
//	return 0;
//}
