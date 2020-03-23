#pragma once
#include "Film.h"
#include "Repo.h"
using namespace std;

class Service
{
private:
	Repo repo;
public:
	Service();
	Service(Repo& r);
	void setRepo(const Repo& r);
	void addService(Film& f);
	int findService(Film f);
	int deleteService(Film& f);
	int sizeService();
	Film updateService(Film f, char* titlu, char* data, char* gen);
	Film* getAllService();
	~Service();

};