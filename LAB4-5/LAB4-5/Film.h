#pragma once
#include <iostream>
using namespace std;

class Film
{
private:
	char* titlu;
	char* data;
	char* gen;
public:
	Film();
	Film(const char* titlu, const char* data, const char* gen);
	Film(const Film& f);
	~Film();

	char* getTitlu();
	char* getData();
	char* getGen();

	void setTitlu(char* titlu);
	void setData(char* data);
	void setGen(char* gen);
	
	bool operator==(const Film& f);
	Film& operator=(const Film& f);
	friend ostream& operator<<(ostream& os, const Film& f);



};
