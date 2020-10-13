#pragma once
#ifndef MANO_BIB_H_INCLUDED
#define MANO_BIB_H_INCLUDED

using namespace std;

#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
#include <sstream> 

double gal_rez(int egzaminas, vector<int> nd);
double vid(int egzaminas, vector<int> nd);
double gal_mediana(int egzaminas, vector<int> nd);
void spausdinimas(vector<string> vardai, vector<string> pavardes, vector<double> galutinis1, vector<double> galutiniai, vector<double>galutiniai2);

#endif