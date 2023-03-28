#include "Feed.h"

Feed::Feed(double kiszonka_kukurydza_, double kiszonka_trawy_, double lucerna_, double mloto_, double ziarno_kukurydzy_, double siano_,
	double sruta_sojowa_, double pasza_tresciwa_, double kreda_, double pasza_mineralna_, double wyslodki_, double sloma_, double GPS_)
{
	kiszonka_kukurydza = kiszonka_kukurydza_;
	kiszonka_trawy = kiszonka_trawy_;
	lucerna = lucerna_;
	mloto = mloto_;
	ziarno_kukurydzy = ziarno_kukurydzy_;
	siano = siano_;
	sruta_sojowa = sruta_sojowa_;
	pasza_tresciwa = pasza_tresciwa_;
	kreda = kreda_;
	pasza_mineralna = pasza_mineralna_;
	wyslodki = wyslodki_;
	sloma = sloma_;
	GPS = GPS_;
}

double Feed::ObliczDawkeTMR (int ilosc)
{
	return ilosc * GPS + kiszonka_kukurydza + kiszonka_trawy + kreda + lucerna + mloto + pasza_mineralna + pasza_tresciwa + siano + sloma + sruta_sojowa + wyslodki + ziarno_kukurydzy;
}