#include "funkcijos.h"

bool compareVardai(studentas a, studentas b) {
    return a.vardas < b.vardas;
}
bool comparePavardes(studentas a, studentas  b) {
    return a.pavarde < b.pavarde;
}

list<studentas> nuskaitymas() {
	fstream failas;

	string n;

	do {
		try {
			cout << "Iveskite failo pavadinima: " << endl;
			cin >> n;
			failas.open(n);

			if (failas.fail())
			{
				throw runtime_error("Failas nerastas");
			}
		}
		catch (runtime_error& e) {
			cout << "Klaida! Failas tokiu pavadinimu nerastas." << endl;
			cout << "Jusu ivestis: " << n << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
	} while (failas.fail());

	int rows = 0, cols = 0;
	string eilute, reiksme;
	string vardas1, pavarde1, vardas, pavarde;
	string rez;
	vector<string> rezultatai1;
	vector<string> rezultatai;
	list<studentas> grupe;
	float galutinis;

	while (getline(failas, eilute)) {
		rows++;
		if (rows == 1) {
			stringstream ss(eilute);
			while (ss >> reiksme) {
				cols++;
			}
		}
	}
	failas.close();

	failas.open(n);

	if (failas.is_open()) {
		for (int i = 0; i < 1; i++) {
			failas >> vardas1 >> pavarde1;

			for (int j = 0; j < cols - 2; j++) {
				failas >> rez;
				rezultatai1.push_back(rez);
			}
			rezultatai1.clear();
			vector<string>().swap(rezultatai1);
		}

		for (int i = 1; i < rows; i++) {
			failas >> vardas >> pavarde >> galutinis;

			grupe.push_back(studentas{ vardas, pavarde, galutinis });

		}
	}
	failas.close();
	return grupe;
}



void spausdinimas(vector<studentas>sarasas)
{

    cout << setw(10) << "Vardas" << setw(25) << "Pavarde" << setw(25) << "Galutinis"<< endl;
    cout << "---------------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < vardai.size(); i++) {

        cout << setw(5) << vardai[i] << setw(25) << pavardes[i] << setw(25) << galutinis1[i] << endl;

    }
}
