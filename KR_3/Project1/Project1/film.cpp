#include <iostream>
#include "film.h"
#define SIZE 20

Film::Film(const char* name, const char* producer, const char* genre, int year)
{
	strcpy_s(Name, SIZE, name);
	strcpy_s(Producer, SIZE, producer);
	strcpy_s(Genre, SIZE, genre);

	if (year < 0) {
		throw "Year < 0!\n";
	}

	Year = year;
}


void Film::PrintInfo()
{
	std::cout << "Film: " << Name << " Producer: " << Producer << " Genre: " << Genre << " Year: "<< Year << " \n";
}