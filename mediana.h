#pragma once
using namespace std;

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>
#include <fstream>

double gal_mediana(int egzaminas, vector<int> nd)
{
    vector<double> skaiciai;
    for (int i = 0; i < nd.size(); i++) {
        skaiciai.push_back(nd.at(i));
    }

    skaiciai.push_back(egzaminas);

    sort(skaiciai.begin(), skaiciai.end());

    if (skaiciai.size() % 2 == 0)
    {
        return (skaiciai[skaiciai.size() / 2 - 1] + skaiciai[skaiciai.size() / 2]) / 2;
    }
    else
    {
        return skaiciai[skaiciai.size() / 2];
    }
}
