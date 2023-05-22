//#include <iostream>
//#include <string>
//#include <fstream>
//
//int tempcount = 0;
//
//void selectSortData(std::string* array, int size)
//{
//	for (int step = 0; step < size - 1; ++step) 
//	{
//		for (int i = 0; i < size - step - 1; ++i) 
//		{
//			if (array[i] > array[i + 1])
//			{
//				std::swap<std::string>(array[i], array[i + 1]);
//			}
//		}
//	}
//}
//
//int StringDelimiter(char* temp, std::string* lines, bool IsWrite)
//{
//	char* count[50] = {};
//	char* tmp_char = strtok_s(temp, " ", count);
//
//	while (tmp_char != NULL)
//	{
//		if (IsWrite)
//		{
//			lines[tempcount] = tmp_char;	
//		}
//		tmp_char = strtok_s(NULL, " ", count);
//		tempcount++;
//	}		
//
//	return tempcount;
//}
//
//int main()
//{
//	std::ifstream input("./code/2 sem/materials/input.txt");
//	std::ofstream output("./code/2 sem/materials/output.txt");
//
//	std::string freespace = "";
//	char temp_data[256];
//	int arraysize = 0;
//
//	if ((input.is_open() || output.is_open()) == NULL)
//	{
//		std::cout << "Input error is: "
//			<< input.is_open()
//			<< "Output erroe is: "
//			<< output.is_open();
//		return -1;
//	}
//
//	for (int i = 0; input.getline(temp_data, 256); i++)
//	{
//		arraysize += StringDelimiter(temp_data, NULL, NULL);
//	}
//
//	
//	std::string* lines = new std::string[arraysize];
//
//	input.close();
//	input.open("./code/2 sem/materials/input.txt");
//
//	tempcount = 0;			// Relocate first step
//
//	for (int i = 0; input.getline(temp_data, 256); i++)
//	{
//		int ELine = StringDelimiter(temp_data, lines, 1);
//	}
//
//	selectSortData(lines, arraysize);
//
//	for (int i = 0; i < arraysize; i++)
//	{
//		if (lines[i] != freespace)
//		{
//			output << lines[i] << " ";
//		}
//	}
//
//	return 0;
//}