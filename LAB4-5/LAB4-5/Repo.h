#pragma once
#include "Film.h"

class Repo {
private:
	Film filme[20];
	int n;
public:
	Repo();
	void add(Film f);
	int find(Film f);
	void deletefilm(Film f);
	void update(Film f, char* titlu, char* data, char* gen);
	Film* getAll();
	int size();
	~Repo();
};
