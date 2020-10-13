#pragma once

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>
#include <fstream>

double gal_rez(int egzaminas, vector<int> nd)
{
    double vidurkis, galutinis1;

    vidurkis = accumulate(nd.begin(), nd.end(), 0.000) / nd.size();
    galutinis1 = (0.4 * vidurkis) + (0.6 * egzaminas);

    return galutinis1;
}