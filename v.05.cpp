

#include "funkcijos.h"
#include "struktura.h"

struct vargsiukai {
    string vardai;
    string pavardes;
    int nd;
};

struct galvociai {
    string vardai;
    string pavardes;
    int nd;
};


int main()
{

    int sk, egzaminas{}, tmp;

    vector<int> nd;
    vector<string> vardai;
    vector<string> pavardes;
    vector<double> galutiniai;
    vector<double> galutiniai2;

    string vardas, pavarde, vardas_i, pavarde_i;

    string atsakymas;
    cout << "Ar norite faila sugeneruoti automatiskai?(T/N)\n";
    string tn;
    cin >> tn;

    if (tn == "N") {
        cout << "Iveskite studentu skaiciu: \n";
        cin >> sk;

        if (sk > 0)
        {
            for (int i = 0; i < sk; i++) {

                cout << "Iveskite studento varda: \n";
                cin >> vardas;

                if (isdigit(vardas[i]))
                {
                    cout << "Klaida! Vardas negali buti skaicius\n";
                }
                else {
                    vardai.push_back(vardas);

                    cout << "Iveskite studento pavarde: \n";
                    cin >> pavarde;
                    if (isdigit(pavarde[i]))
                    {
                        cout << "Klaida! Pavarde negali buti skaicius \n";
                    }
                    else
                    {
                        pavardes.push_back(pavarde);

                        cout << "Ar namu darbu pazymius sugeneruoti automatiskai? ('T'-taip/'N'-ne) \n";
                        string ats;
                        cin >> ats;

                        if (ats == "T") {

                            while (true) {

                                using hrClock = chrono::high_resolution_clock;
                                mt19937 mt(static_cast<long unsigned int>(hrClock::now().time_since_epoch().count()));
                                uniform_int_distribution<int> dist(0, 10);
                                for (int i = 0; i < 1; ++i) {
                                    cout << "Sugeneruotas balas: " << dist(mt) << endl;
                                    nd.push_back(dist(mt));
                                }

                                cout << "Ar jau ivesti visi rezulatatai ('T'-taip/'N'-ne)? \n";
                                string ats2;
                                cin >> ats2;

                                if (ats2 == "T") {
                                    break;
                                }
                            }
                        }
                        else if (ats == "N") {

                            while (true) {
                                cout << "Iveskite namu darbu rezultatus \n";
                                cin >> tmp;
                                if (tmp > 0 && tmp <= 10)
                                {
                                    nd.push_back(tmp);
                                    cout << "Ar jau ivesti visi rezulatatai ('T'-taip/'N'-ne)? \n";
                                    string ats2;
                                    cin >> ats2;

                                    if (ats2 == "T") {
                                        break;
                                    }

                                }
                                else {
                                    cout << "Klaida! Pazimys turi buti 10-baleje sistemoje.\n";
                                }
                            }
                        }

                        else
                        {
                            cout << "Klaida! reikia pasirinkti T arba N.\n";
                        }

                        cout << "Ar egzamino bala sugeneruoti automatiskai? ('T'-taip/'N'-ne) \n";
                        string ats2;
                        cin >> ats2;

                        if (ats2 == "T")
                        {
                            int max = 10;
                            srand(time(0));
                            egzaminas = rand() % max;
                            cout << "Sugeneruotas egzamino balas:  " << egzaminas << "\n";
                        }
                        else if (ats2 == "N")
                        {
                            cout << "Iveskite egzamino rezultata: \n";
                            cin >> egzaminas;
                            if (egzaminas < 0 || egzaminas >= 11) {

                                cout << "Klaida! Egzamino rezultatas turi buti 10-baleje sistemoje.\n";
                            }
                        }
                        else {
                            cout << "Klaida! Reikia pasirinkti T arba N.\n ";
                        }

                        galutiniai.push_back(gal_rez(egzaminas, nd));

                        galutiniai2.push_back(gal_mediana(egzaminas, nd));

                        nd.clear();

                    }

                }
            }
        }

        else {
            cout << "Pasirinkite teigiama sveikaji skaiciu" << endl;
        }
        spausdinimas(vardai, pavardes, galutiniai, galutiniai2);
    }
    else if (tn == "T") {

        cout << "Pasirinkite irasu skaiciu(1000/10000/100000/1000000/10000000)" << endl;
        int irasai;
        cin >> irasai;
        if (irasai == 1000) {
            srand(time(0));
            cout << "Sugeneruoti vardai ir pavardes" << endl;
            vector <studentas> a;
            for (int i = 0; i < 1000; i++) {
                a.push_back(gen());
            }
            spausdinimas(a);
        }
        else if (irasai == 10000) {
            srand(time(0));
            cout << "Sugeneruoti vardai ir pavardes" << endl;
            vector <studentas> a;
            for (int i = 0; i < 10000; i++) {
                a.push_back(gen());
            }
            spausdinimas(a);
        }
        else if (irasai == 100000) {
            srand(time(0));
            cout << "Sugeneruoti vardai ir pavardes" << endl;
            vector <studentas> a;
            for (int i = 0; i < 100000; i++) {
                a.push_back(gen());
            }
            spausdinimas(a);
        }
        else if (irasai == 1000000) {
            srand(time(0));
            cout << "Sugeneruoti vardai ir pavardes" << endl;
            vector <studentas> a;
            for (int i = 0; i < 1000000; i++) {
                a.push_back(gen());
            }
            spausdinimas(a);
        }
        else if (irasai == 10000000) {
            srand(time(0));
            cout << "Sugeneruoti vardai ir pavardes" << endl;
            vector <studentas> a;
            for (int i = 0; i < 10000000; i++) {
                a.push_back(gen());
            }
            spausdinimas(a);
        }
        vector<studentas> sarasas;
        vector<vargsiukai> varg;
        vector<galvociai> galv;

        for (int i = 0; i < sarasas.size(); i++) {
            if (sarasas[i].nd < 5) {
                varg.push_back(vargsiukai{ sarasas[i].vardas, sarasas[i].pavarde, sarasas[i].nd });
            }
            else if (sarasas[i].nd >= 5) {
                galv.push_back(galvociai{ sarasas[i].vardas, sarasas[i].pavarde, sarasas[i].nd });
            }
        }

        ofstream vargsiukai;
        ofstream galvociai;

        vargsiukai.open("vargsiukai.txt");
        galvociai.open("galvociai.txt");

        vargsiukai << left << setw(30) << "Vardas" << setw(30) << "Pavarde" << setw(30) << "Pazymis" << endl;

        for (int i = 0; i < varg.size(); i++) {
            vargsiukai << left << setw(30) << varg[i].vardai << setw(30) << varg[i].pavardes << setw(30) << varg[i].nd << endl;
        }

        galvociai << left << setw(30) << "Vardas" << setw(30) << "Pavarde" << setw(30) << "Pazymis" << endl;

        for (int i = 0; i < galv.size(); i++) {
            galvociai << left << setw(30) << galv[i].vardai << setw(30) << galv[i].pavardes << setw(30) << galv[i].nd << endl;
        }

        vargsiukai.close();
        galvociai.close();

    }
    else {
        cout << "Pasirinkite T arba N" << endl;
        return main();
    }


}



