#pragma once


class Cow
{
	double milk = 0;
public:
	int age;		//wiek wyrazany jest w latach
	int productivity;	//5, 4, 3, 2, 1 i 0 to stopnie wydajnosci

	Cow(int age, int productivity);		//tworzymy krowe
	Cow();
};