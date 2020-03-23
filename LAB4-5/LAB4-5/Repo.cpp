#include "Repo.h"
#include "Film.h"

Repo::Repo()
{ 
	this->n = 0; 
}

void Repo::add(Film f)
{
	this->filme[this->n++] = f;
}

void Repo::deletefilm(Film f)
{
	int i = find(f);
	if (i != -1)
	{
		filme[i] = filme[n - 1];
		n--;
		
	}
	else {
		cout << "Filmul introdus nu exista!";cout << endl;
	}
}

void Repo::updatefilm(Film f, char* t, char* d, char* g)
{
	int i = find(f);
	if (i != -1)
	{
		filme[i].setTitlu(t);
		filme[i].setData(d);
		filme[i].setGen(g);
		
	}
	else {
		cout << "Filmul introdus nu exista!";cout << endl;
	}
}

int Repo::find(Film f)
{
	for (int i = 0;i < n;i++)
		if (filme[i] == f) return i;
	return -1;
}

Film* Repo::getAll() {
	return this->filme;
}

int Repo::size() { return this->n; }

Repo::~Repo() {
	this->n = 0;
}