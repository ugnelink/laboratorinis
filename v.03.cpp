#include "funkcijos.h"
#include "struktura.h"

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

    if (tn =="N"){
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
        spausdinimas(vardai, pavardes, galutiniai, galutiniai2);
    }
    else {

       srand(time(0));
       cout << "Sugeneruoti vardai ir pavardes" << endl;
       vector <studentas> a;
       for (int i = 0; i < 10000; i++) {
           a.push_back(gen());
       }
       spausdinimas(a);
    }
        
}

