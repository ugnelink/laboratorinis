#include "funkcijos.h"

bool compareVardai(studentas a, studentas b) {
    return a.vardas < b.vardas;
}
bool comparePavardes(studentas a, studentas  b) {
    return a.pavarde < b.pavarde;
}

list<studentas> nuskaitymas() {

}

void spausdinimas(vector<studentas>sarasas)
{
    cout << setw(10) << "Vardas" << setw(25) << "Pavarde" << setw(25) << "Galutinis" << setw(25) << "Vidurkis" << setw(25) << "Mediana" << endl;
    cout << "---------------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < vardai.size(); i++) {

        cout << setw(5) << vardai[i] << setw(25) << pavardes[i] << setw(25) << galutinis1[i] << setw(25) << galutiniai[i] << setw(25) << galutiniai2[i] << endl;

    }
}
