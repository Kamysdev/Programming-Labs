//#include <conio.h>
//#include <iostream>
//#include <fstream>
//
//// ФИО пассажира, количество занимаемых багажом мест, общий вес вещей.
//
//#pragma pack(push, 1)
//struct passengersData
//{
//	std::string Name;
//	std::string Surname;
//	std::string Patronymic;
//
//	int Occupated_places;
//	int Weight;
//
//	passengersData()
//	{
//		Name = "Bob";
//		Surname = "Bob";
//		Patronymic = "Bob";
//
//		Occupated_places = 0;
//		Weight = 0;
//	}
//};
//#pragma pack (pop)
//
//void EnterData()
//{
//	std::ofstream passengerList("./code/2 sem/materials/passengerList.txt",
//		std::ios::binary || std::ios::out);
//
//	int countN;
//	passengersData passengers;
//
//	std::cout << "Enter N: ";
//	std::cin >> countN;
//
//	for (int i = 0; i < countN; i++)
//	{
//		std::cout << "Enter Name: ";
//		std::cin >> passengers.Name;
//
//		std::cout << "Enter Surname: ";
//		std::cin >> passengers.Surname;
//
//		std::cout << "Enter Patronymic: ";
//		std::cin >> passengers.Patronymic;
//
//		std::cout << "Enter occupated baggege places: ";
//		std::cin >> passengers.Occupated_places;
//
//		std::cout << "Enter weight of baggege: ";
//		std::cin >> passengers.Weight;
//
//		passengerList.write((char*)&passengers, sizeof(passengers));
//	}
//	passengerList.close();
//}
//
//void PrintData()
//{
//	std::ifstream passengerList("./code/2 sem/materials/passengerList.txt",
//		std::ios::binary);
//
//	passengersData passengersreaded;
//
//	while (passengerList.read((char*)&passengersreaded, sizeof(passengersreaded)))
//	{
//		std::cout << passengersreaded.Name << std::endl
//			<< passengersreaded.Surname << std::endl
//			<< passengersreaded.Patronymic << std::endl
//			<< passengersreaded.Occupated_places << std::endl
//			<< passengersreaded.Weight << std::endl;
//	}
//}
//
//void EnterDataInTheEnd()
//{
//		
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
//
//		switch (menustatus)
//		{
//			case 1:
//			{
//				EnterData();
//				break;
//			}
//			case 2:
//			{
//				PrintData();
//				break;
//			}
//			case 3:
//			{
//				EnterDataInTheEnd();
//				break;
//			}
//		}
//		system("CLS");
//	}
//
//	return 0;
//}