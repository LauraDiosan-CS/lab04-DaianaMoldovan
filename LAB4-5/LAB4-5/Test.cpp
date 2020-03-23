#include "Test.h"
#include "Repo.h"
#include "Film.h"
#include <assert.h>
#include <string.h>
void teste()
{
	Repo r;
	Film f1("aaaa","12.12.2010","comedie");
	Film f2("bbbb", "12.12.2015", "actiune");
	Film f3("cccc", "12.12.2016", "drama");
	r.add(f1);
	r.add(f2);
	r.add(f3);
	assert(r.size() == 3);
	assert(r.getAll()[0] == f1);

	r.deletefilm(f1);
	assert(r.size() == 2);
	
	int i = r.find(f2);
	assert(i == 1);
    assert(r.getAll()[1] == f2);
	assert(r.getAll()[2] == f3);
	
	Film f4("dddd", "12.12.2020", "comedie");
	r.add(f4);
	assert(r.size() == 3);
	char t[20] = "dddd";
	char d[20] = "12.12.2020";
	char g[20] = "comedie";
	r.updatefilm(f3, t, d, g);
	f3.setTitlu(t);
	f3.setData(d);
	f3.setGen(g);

	assert(strcmp(f3.getTitlu(), t) == 0);
	assert(f3 == f4);

	
	

}