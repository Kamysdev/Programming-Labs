#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	std::ifstream input("./code/2 sem/materials/input.txt");
	std::ofstream output("./code/2 sem/materials/output.txt");
	std::string templine;
	char* count[50] = {};
	char temp[50];

	if ((input.is_open() || output.is_open()) == NULL)
	{
		std::cout << "Input error is: "
			<< input.is_open()
			<< "Output erroe is: "
			<< output.is_open();
		return -1;
	}

	std::string lines[100];

	for (int i = 0; input.getline(temp, 50); i++)
	{
		int tempcount = 0;
		char* tmp_char = strtok_s(temp, " ", count);

		while (tmp_char != NULL)
		{
			lines[tempcount] = tmp_char;
			tmp_char = strtok_s(NULL, " ", count);
			tempcount++;
		}
	}
	


	return 0;
}