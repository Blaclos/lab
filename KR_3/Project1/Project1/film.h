#pragma once
#define SIZE 50

struct Film
{
	char Name[SIZE];
	char Genre[SIZE];
	char Producer[SIZE];
	int Year;


	Film(const char* name = "", const char* producer = "", const char* genre = "", int year = 0);

	void PrintInfo();
};