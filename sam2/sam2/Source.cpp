#include <iostream>
#include <cstring>
#define SIZE 100
using namespace std;




void test1()
{
	char str[SIZE];
	char str2[SIZE] = "";
	cout << "Enter string: ";
	cin.getline(str, SIZE);

	for (int i = 0; i < strlen(str) ; i++)
	{
		if ((str[i] <= '9') && (str[i] >= '1'))
		{
			if (str[i] == str[i + 1])
			{
				str2[i] = str[i];
				i++;
			}
			else
				str2[i] = str[i];
		}
		else
			str2[i] = str[i];
	}
	cout << str2;
}

int main()
{
	test1();
}