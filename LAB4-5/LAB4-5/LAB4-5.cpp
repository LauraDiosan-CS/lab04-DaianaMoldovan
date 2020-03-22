
#include <iostream>
#include "Test.h"
#include "Film.h"
#include "Repo.h"
using namespace std;
void add_ui(Repo& r)
{
	char titlu[30], data[30], gen[30];
	cout << endl;
	cout << "Introduceti titlu: ";
	cin >> titlu;
	cout << endl;
	cout << "Introduceti data:  ";
	cin >> data;
	cout << endl;
	cout << "Introduceti genul:  ";
	cin >> gen;
	cout << endl;

	Film f(titlu, data, gen);
	r.add(f);

}

void delete_ui(Repo& r, Film f)
{
	r.deletefilm(f);
}

void update_ui(Repo& r, Film f, char* titluu, char* dataa, char* genn)
{
	r.update(f, titluu, dataa, genn);

}

void afisare_ui(Repo& r)
{
	cout << endl;
	cout << "Elementele listei sunt: ";
	cout << endl;
	for (int i = 0;i < r.size();i++)
	{
		cout << r.getAll()[i] << " ";
		cout << endl;
	}

}
int main()
{
	Repo r;
	teste();
	while (true)
	{
		int op;
		cout << "1.Adaugare element" << endl;
		cout << "2.Afisare" << endl;
		cout << "3.Modificare" << endl;
		cout << "4.Stergere" << endl;
		cout << "5.Iesire" << endl;
		cin >> op;
		if (op == 1)
		{
			add_ui(r);
		}
		if (op == 2)
		{
			afisare_ui(r);
		}
	
		if (op == 3)
		{
			char titlu[30], data[30], gen[30],titluu[30], dataa[30], genn[30];
			cout << "Introduceti titlul filmului care trebuie actualizat: ";
			cin >> titlu;
			cout << endl;
			cout << "Introduceti data filmului care trebuie actualizat: ";
			cin >> data;
			cout << endl;
			cout << "Introduceti genul filmului care trebuie actualizat : ";
			cin >> gen;
			cout << endl;
			cout << "Introduceti titlul actualizat al filmului : ";
			cin >> titluu;
			cout << endl;
			cout << "Introduceti data actualizata a filmului : ";
			cin >> dataa;
			cout << endl;
			cout << "Introduceti genul actualizat al filmului : ";
			cin >> genn;
			cout << endl;
			Film ff(titlu, data, gen);
			update_ui(r, ff, titluu, dataa, genn);
			cout << "Film actualizat!";
			cout << endl;
			

		}
		if (op == 4)
		{
			char titlu[30], data[30], gen[30];
			cout << "Introduceti titlul filmului care trebuie sters: ";
			cin >> titlu;
			cout << endl;
			cout << "Introduceti data filmului care trebuie sters: ";
			cin >> data;
			cout << endl;
			cout << "Introduceti genul filmului care trebuie stres : ";
			cin >> gen;
			cout << endl;
			Film ff(titlu, data, gen);
			delete_ui(r, ff);
			cout << "Film sters!";
			cout << endl;


		}
		if(op==5)
		{
			break;
		}
	}
}

