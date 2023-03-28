#pragma once

class Feed
{
	double kiszonka_kukurydza;
	double kiszonka_trawy;
	double lucerna;
	double mloto;
	double ziarno_kukurydzy;
	double siano;
	double sruta_sojowa;
	double pasza_tresciwa;
	double kreda;
	double pasza_mineralna;
	double wyslodki;
	double sloma;
	double GPS;

public:
	double ObliczDawkeTMR(int ilosc);

	Feed(double kiszonka_kukurydza_, double kiszonka_trawy_, double lucerna_, double mloto_, double ziarno_kukurydzy_, double siano_, 
		double sruta_sojowa_, double pasza_tresciwa_, double kreda_, double pasza_mineralna_, double wyslodki_, double sloma_, double GPS_);

};