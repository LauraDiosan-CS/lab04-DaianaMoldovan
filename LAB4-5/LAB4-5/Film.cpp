#include "Film.h"
#include <iostream>
using namespace std;

Film::Film()
{
	this->titlu = NULL;
	this->data = NULL;
	this->gen = NULL;
}

Film::Film(const char* titlu,const char* data, const char*gen )
{
	this->titlu = new char[strlen(titlu) + 1];
	strcpy_s(this->titlu, strlen(titlu) + 1, titlu);
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, strlen(data) + 1, data);
	this->gen = new char[strlen(gen) + 1];
	strcpy_s(this->gen, strlen(gen) + 1,gen);

}

Film::Film(const Film& f)
{
	this->titlu = new char[strlen(f.titlu) + 1];
	strcpy_s(this->titlu, strlen(f.titlu) + 1, f.titlu);
	this->data = new char[strlen(f.data) + 1];
	strcpy_s(this->data, strlen(f.data) + 1, f.data);
	this->gen = new char[strlen(f.gen) + 1];
	strcpy_s(this->gen, strlen(f.gen) + 1, f.gen);
}

Film::~Film() {
	if (this->titlu!=NULL) 
		delete[] this->titlu;
	this->titlu = NULL;
	this->data = NULL;
	this->gen = NULL;

	
}

char* Film::getTitlu() {
	return this->titlu;
}

char* Film::getData() {
	return this->data;
}

char* Film::getGen() {
	return this->gen;
}

void Film::setTitlu(char* titlu)
{
	if (this->titlu!=NULL) {
		delete[] this->titlu;
	}
	this->titlu = new char[strlen(titlu) + 1];
	strcpy_s(this->titlu, strlen(titlu) + 1, titlu);
}

void Film::setData(char* data)
{
	if (this->data != NULL) {
		delete[] this->data;
	}
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, strlen(data) + 1, data);
}

void Film::setGen(char* gen)
{
	if (this->gen != NULL) {
		delete[] this->gen;
	}
	this->gen = new char[strlen(gen) + 1];
	strcpy_s(this->gen, strlen(gen) + 1, gen);
}

Film& Film::operator=(const Film& f) {
	if(this == &f)
		return *this;
	this->setTitlu(f.titlu);
	this->setData(f.data);
	this->setGen(f.gen);
	return *this;
}

ostream& operator<<(ostream& os, const Film& f)
{
	os << f.titlu<<" "<<f.data<<" "<<f.gen<<" ";
	return os;
}

bool Film::operator ==(const Film& f)
{
	return strcmp(titlu, f.titlu) == 0 && strcmp(data, f.data) == 0 && strcmp(gen, f.gen) == 0;
}
