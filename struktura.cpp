#include "struktura.h"
using namespace std; 

studentas gen() {
	studentas a; 

	switch (rand() % 10) {
	   case 0: a.vardas = "vardas1"; break;
	   case 1: a.vardas = "vardas2"; break;
	   case 2: a.vardas = "vardas3"; break;
	   case 3: a.vardas = "vardas4"; break;
	   case 4: a.vardas = "vardas5"; break;
	   case 5: a.vardas = "vardas6"; break;
	   case 6: a.vardas = "vardas7"; break;
	   case 7: a.vardas = "vardas8"; break;
	   case 8: a.vardas = "vardas9"; break;
	   case 9: a.vardas = "vardas10"; break;
	}

	switch (rand() % 10) {
	case 0: a.pavarde = "pavarde1"; break;
	case 1: a.pavarde = "pavarde2"; break;
	case 2: a.pavarde = "pavarde3"; break;
	case 3: a.pavarde = "pavarde4"; break;
	case 4: a.pavarde = "pavarde5"; break;
	case 5: a.pavarde = "pavarde6"; break;
	case 6: a.pavarde = "pavarde7"; break;
	case 7: a.pavarde = "pavarde8"; break;
	case 8: a.pavarde = "pavarde9"; break;
	case 9: a.pavarde = "pavarde10"; break;
	}

	a.nd = rand() % 10 + 1;
	return a; 
}
void spausdinimas(vector<studentas>& a) {
	string rib(49, '-');
	string rib_str(49, '-');
	cout << rib_str << endl << "|" << left << setw(15) << "Vardas" << "|" << left << setw(15) << "Pavarde" << "|" << right << setw(15) << "Pazymis" << "|" << endl << rib_str << endl;
	for (studentas& i : a) {
		cout << "|" << left << setw(15) << i.vardas << "|" << left << setw(15) << i.pavarde << "|" << right << setw(15) << i.nd << "|" << endl;
		(i.pavarde == a.back().pavarde && i.vardas == a.back().vardas && i.nd == a.back().nd) ? cout << rib_str << endl : cout << rib << endl;
	}

}