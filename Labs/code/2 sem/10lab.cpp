#include <iostream>
#include <string>
#include <fstream>

int tempcount = 0;

int StringDelimiter(char* temp, std::string* lines, bool IsWrite)
{
	char* count[50] = {};

	char* tmp_char = strtok_s(temp, " ", count);

	while (tmp_char != NULL)
	{
		if (IsWrite)
		{
			lines[tempcount] = tmp_char;
		}
		tmp_char = strtok_s(NULL, " ", count);
		tempcount++;
	}

	return tempcount;
}

int main()
{
	std::ifstream input("./code/2 sem/materials/input.txt");
	std::ofstream output("./code/2 sem/materials/output.txt");
	std::string templine;
	char temp_data[50];

	if ((input.is_open() || output.is_open()) == NULL)
	{
		std::cout << "Input error is: "
			<< input.is_open()
			<< "Output erroe is: "
			<< output.is_open();
		return -1;
	}
	
	int arraysize = 0;

	for (int i = 0; input.getline(temp_data, 50); i++)
	{
		arraysize += StringDelimiter(temp_data, NULL, NULL);
	}
	std::string* lines = new std::string[arraysize];

	input.close();
	input.open("./code/2 sem/materials/input.txt");

	tempcount = 0;

	for (int i = 0; input.getline(temp_data, 50); i++)
	{
		int ELine = StringDelimiter(temp_data, lines, 1);
	}

	for (int i = 0; i < arraysize; i++)
	{
		std::cout << lines[i] << " ";
	}

	return 0;
}