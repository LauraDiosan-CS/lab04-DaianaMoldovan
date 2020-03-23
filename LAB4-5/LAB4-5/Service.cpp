#include "Service.h"

Service::Service()
{
}

Service::Service(const Repo& r)
{
	repo = r;
}

void Service::setRepo(const Repo& r)
{
	repo = r;
}

void Service::addService(Film f)
{
	repo.add(f);
}

int Service::deleteService(Film f)
{
	return repo.deletefilm(f);
}

int Service::sizeService()
{
	return repo.size();
}

Film Service::getAllService()
{
	return repo.getAll();
}

Film Service::updateService(Film f, char *t, char *d, char *g)
{
	repo.updatefilm(f, t, d, g);

}

int Service::findService(Film f)
{
	return repo.find(f);
}

Service::~Service()
{
}