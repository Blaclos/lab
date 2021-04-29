#include <iostream>
#include <fstream>

#define SIZE 100
using namespace std;

void test()
{
	char str[SIZE];
	char str2[SIZE] = "";

	ifstream fin("in.txt");

	int lenght = 0;
	fin >> lenght;

	
	for (int i = 0; i < lenght; ++i) {
		fin >> str[i];
	}
	fin.close();
	
	
	int j = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			j++;
		}
		if (str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ':' || str[i] == ';')
			j = 0;
		if (str[i] == ' ')
			for (int g = i - j; g < j; g++)
				str2[i] = str[g];
	}

	cout << str;
	cout << str2;
}


int main()
{
	test();
}