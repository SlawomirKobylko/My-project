#include "Cow.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


Cow::Cow(int age_, int productivity_)
{
	srand(time(nullptr));

	age = age_;
	productivity = productivity_;
	
	switch (productivity)
	{
	case 1:
		milk = rand() % (50 - 35 + 1) + 35;
		break;
	case 2:
		milk = rand() % (35 - 20 + 1) + 20;
		break;
	case 3:
		milk = rand() % (20 - 8 + 1) + 8;
		break;
	case 4:
		milk == 0; break;
	case 5:
		milk == 0; break;
	}
	std::cout << "Wydajnoœc krowy to " << milk << " litrow mleka na dzien" << std::endl;
	if (milk == 0)
	{
		std::cout << "Krowa obecnie nie daje mleka " << std::endl;
	}
}
Cow::Cow() {}