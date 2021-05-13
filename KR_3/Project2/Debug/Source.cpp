#include <iostream>
#include <fstream>
using namespace std;
#define SIZE 20

void read_info(const char* fname1, const char* fname2, int& size1, int& size2, char*& grup1, char*& grup2)
{
	ifstream input(fname1);

	input >> size1;

	grup1 = new char[size1];

	char name[SIZE];

	for (int i = 0; i < size1; ++i) {
		input >> grup1[i];
	}
	input.close();

	ifstream input(fname2);

	input >> size2;
	grup2 = new char[size2];
	for (int i = 0; i < size2; ++i) {
		input >> grup2[i];
	}

	input.close();
}


void test()
{
	char* grup1;
	char* grup2;
	int size1;
	int size2;
	read_info("Int1.txt", "Int2.txt", size1, size2, grup1, grup2);

	ofstream output("Out.txt");
	output << size1+size2 << endl;
	for (int i = 0; i < size1 + size2; ++i) {
		if (i <= size1)
			output << grup1[i];
		else
			output << grup2[i-size1];
	}
	output.close();
}


int main()
{
	test();
}