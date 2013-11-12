/*********************************************************************
Tehtävä: HARJOITUS 19
Tekijä: Pekka Melgin
PVM: 12.11.2013
Kuvaus:
Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava: Näppäimistä toimii
nopeusanturina ja näyttä mittarin näyttänä.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisenä nopeutena
näytälle. Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava:
Ohjelman kaynnistyksessa mittari näyttää nolla
0
0
0
0
0 (alkutila) nopeus = 0 km/h
Anna nopeus: 10 => 2 km/h
Anna nopeus: 20 => 6 km/h
Anna nopeus: 30 => 12 km/h
Anna nopeus: 40 => 20 km/h
Anna nopeus: 50 => 30 km/h
Anna nopeus: 50 => 38 km/h
Anna nopeus: 50 => 44 km/h
Anna nopeus: 50 => 48 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: -5 => loppu

Toteuta kayttaen taulukkoa.
*********************************************************************/
#include <iostream>
using namespace std;
int main() {
	int nopeus[5] = {0,0,0,0,0};
	cout << "Kovaako ajetaan?\n";
	for (int ind = 0; nopeus[ind] == 0; ind++) {
		cin >> nopeus[ind];
		if (nopeus[ind] < 0) {
			cout << "Ja sen pituinen se\n";
			break;
		}
		cout << "Keskinopeus on " << (nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5 << "km/h\n";
	}
	while (nopeus[4] > 0) {
		nopeus[0] = nopeus[1];
		nopeus[1] = nopeus[2];
		nopeus[2] = nopeus[3];
		nopeus[3] = nopeus[4];
		cin >> nopeus[4];
		if (nopeus[4] < 0) {
			cout << "Ja sen pituinen se\n";
			break;
		}
		cout << "Keskinopeus on " << (nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5 << "km/h\n";
	}
}