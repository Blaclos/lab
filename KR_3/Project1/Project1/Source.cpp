#include <iostream>
#include <fstream>
#include "film.h"
using namespace std;
#define SIZE 20

void read_info(const char* fname, int& size, Film*& films)
{
	ifstream input(fname);

	input >> size;

	films = new Film[size];

	char name[SIZE];
	char producer[SIZE];
	char genre[SIZE];
	int year;

	for (int i = 0; i < size; ++i) {
		try
		{
			input.get();
			input.get(name, SIZE, ',');
			input.get();
			input.get(producer, SIZE, ',');
			input.get();
			input.get(genre, SIZE, ',');
			input.get();
			input >> year;
			films[i] = Film(name, producer, genre, year);
		}
		catch (const char* error)
		{
			cout << "Error: " << error << endl;
			i--;
			size--;
		}
		catch (...) {
			cout << "Error occured\n";
		}

	}
	input.close();
}

void my_sort(int& size, Film*& films)
{

}

void write_to_file(const char* fname, int& size, Film*& films)
{
	ofstream output(fname);
	output << size << endl;
	for (int i = 0; i < size; ++i) {
		output << films[i].Name << ' '
			<< films[i].Producer << ' '
			<< films[i].Genre
			<< films[i].Year << endl;
	}
	output.close();
}


void test()
{
	Film* films;
	int size;
	char my_genre[SIZE];
	cout << "Enter genre: " << endl;
	cin >> my_genre;
	

	read_info("in.txt", size, films);
	write_to_file("Out.txt", size, films);

	/*for (int i = 0; i < size; ++i) {
		films[i].PrintInfo();
		cout << films[i].Genre << endl;
	}*/

	for (int i = 0; i < size; ++i) {
		if (films[i].Genre == my_genre)
			films[i].PrintInfo();
	}
	
}


int main()
{
	test();
}