#include <iostream>
#include <string>
#include <vector>
#include "Cow.h"
#include "Feed.h"
#include "Calf.h"

int grupa1 = 0;
int grupa2 = 0;
int grupa3 = 0;
int grupa4 = 0;
int grupa5 = 0;
int stado;
int grupa;
int wiek;
int flag;

using namespace std;

int main()
{
	cout << "Podaj liczbe krow na gospodarstwie" << endl;
	cin >> stado;

	cout << "Krowy dzielimy na grupe zywieniowe (laktacyjne), dla ktorej kazda dawka paszy TMR jest osobnie liczona" << endl;

	cout << "Grupa 1 - pierwszy okres laktacji." << endl;
	cout << "Grupa 2 - srodkowy okres laktacji." << endl;
	cout << "Grupa 3 - pozny okres laktacji." << endl;
	cout << "Grupa 4 - pierwszy okres zasuzenia." << endl;
	cout << "Grupa 5 - drugi okres zasuszenia." << endl;

	cout << "Krowy powyzej 6 lat kwalifikuja sie do sprzedazy, gospodarstwo hoduje bydlo tylko w wieku produkcyjnym" << endl;
	cout << endl;

	vector<Cow> Krowy;
	vector<Calf> Krowki;

	for (int i = 0; i < stado; i++)
	{
		flag:
		cout << "Podaj wiek krowy numer " << i+1 << ":" << endl;
		cin >> wiek;
		if (wiek > 6)
		{
			cout << "Krowa jest za stara i nie bedzie produkowac mleka, bedziesz musial ja sprzedac" << endl;
		}
		if (wiek < 3)
		{
			Calf Krowka(wiek);
			Krowki.push_back(Krowka);
			//cout << "Zbyt mala wartosc. Krowa produkujaca mleko posiada conajmniej 3 lata" << endl;
			//cout << "Wprowadz ponownie poprawne dane." << endl;
			//goto flag;
		}

		cout << "Podaj grupe produkcyjna krowy od 1 do 5" << endl;
		cin >> grupa;



		Cow Krowa(wiek, grupa);

		switch(Krowa.productivity)
		{
		case 1:
			grupa1++; break;
		case 2:
			grupa2++; break;
		case 3:
			grupa3++; break;
		case 4:
			grupa4++; break;
		case 5:
			grupa5++; break;
		default:
			cout << "Brak takiej kategorii. Wartosc " << grupa << " jest za nieprawidlowa." << endl;
			cout << "Wprowadz ponownie poprawne dane." << endl;
			goto flag; break;
		}
		Krowy.push_back(Krowa);
		cout << "\n";
	}

	cout << "Liczba posiadanych krow: " << Krowy.size() << endl;

	cout << "Liczba krow w pierwszej grupie zywieniowej:"	<< grupa1 << endl;
	cout << "Liczba krow w drugiej grupie zywieniowej: "	<< grupa2 << endl;
	cout << "Liczba krow w trzeciej grupie zywieniowej: "	<< grupa3 << endl;
	cout << "Liczba krow w czwartej grupie zywieniowej: "	<< grupa4 << endl;
	cout << "Liczba krow w piatej grupie zywieniowej: "		<< grupa5 << endl;

	Feed pierwszyOkresLaktacji(25, 5, 4, 3, 8, 1, 2, 5.5, 0.2, 0.2, 0, 0, 0);			//alert jesli ta krowa oddaje mniej mleka niz 45l / dzien
	Feed srodkowyOkresLaktacji(32, 6, 5, 4, 4, 1, 2, 2, 1, 0.1, 0, 0, 0);				//alert jesli ta krowa oddaje mniej mleka niz 30l / dzien
	Feed poznyOkresLaktacji(25, 5.5, 4, 3, 3, 0.5, 1.7, 0, 0.05, 0.1, 0, 0, 0);			//alert, ze ta krowa niedlugo sie zasuszy, alert jesli krowa oddaje mniej mleka niz 20l / dzien, alert o sprzedazy jesli krowa ma wiecej niz 5 lat
	Feed pierwszyOkresZasuszenia(7, 4, 3.2, 0, 0, 0, 0, 0.4, 0, 0.1, 0, 4.5, 9);		//alert ze ta krowa sie juz nie doi
	Feed drugoOkresZasuszenia(13, 3, 3, 0, 0, 0, 0.25, 4, 0.1, 0.1, 3, 0, 0);			//alert ze ta krowa niedlugo sie cieli

	pierwszyOkresLaktacji.ObliczDawkeTMR(grupa1);
	srodkowyOkresLaktacji.ObliczDawkeTMR(grupa2);
	poznyOkresLaktacji.ObliczDawkeTMR(grupa3);
	pierwszyOkresZasuszenia.ObliczDawkeTMR(grupa4);
	drugoOkresZasuszenia.ObliczDawkeTMR(grupa5);

	pierwszyOkresLaktacji.ObliczDawkeTMR(grupa1);
	srodkowyOkresLaktacji.ObliczDawkeTMR(grupa2);
	poznyOkresLaktacji.ObliczDawkeTMR(grupa3);
	pierwszyOkresZasuszenia.ObliczDawkeTMR(grupa4);
	drugoOkresZasuszenia.ObliczDawkeTMR(grupa5);



	/*
	Cow Group1(5, 3); //age 5 year, group 3
	Cow Group2(4, 2); //age 4 year, group 2 
	Cow Group3(3, 1); //age 3 year, group 1
	Cow Group4(2, 2); //age 2 year, group 2
	*/
}