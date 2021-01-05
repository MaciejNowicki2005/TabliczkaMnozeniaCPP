#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main()
{
	string nick;
	int a = 2, b = 2, c, d, poprawne_odp = 0, bledne_odp = 0;
	cout << "Witaj w programie do nauki tabliczki mnozenia!" << endl << endl << "Prosze podaj mi swoje imie: ";
	cin >> nick;
	system("cls");
	for (int pozostale_pytania = 20; pozostale_pytania > 0; pozostale_pytania--)
	{
		cout << endl;
		cout << "| Nick: " << nick << " | Pozostale pytania: " << pozostale_pytania << " | Poprawne odpowiedzi: "<< poprawne_odp<< " | Bledne odpowiedzi: " << bledne_odp << " | " << endl;
		srand(time(NULL));
		a = rand() % 8+1;
		b = rand() % 8+1;
		c = a * b;
		cout << endl << "Ile to jest "<< a << " x " << b <<" ? : ";
		cin >> d;
		if (d == c)
		{
			cout << endl << "Dobrze! " << a << " x " << b << " = " << c << "." << endl;
			poprawne_odp++;
			Sleep(2000);
			system("cls");
		}
		if (d != c)
		{
			cout <<"Zle!!! "<< a << " x " << b << " = " << c << "!" << endl;
			bledne_odp++;
			Sleep(2000);
			system("cls");
		}
	}
	system("cls");
	cout << "----- Wyniki -----" << endl;
	cout << "| Poprawne odpowiedzi: " << poprawne_odp << " | Bledne odpowiedzi: " << bledne_odp << " | " << endl;
}
