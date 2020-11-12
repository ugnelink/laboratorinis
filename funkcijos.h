#pragma once
#ifndef FUNKCIJOS_H_INCLUDED
#define FUNKCIJOS_H_INCLUDED

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

#include "struktura.h";

// suskirtymas kazkaip i failus nzn ar naudojamas void rusiavimas(list<studentas> sarasas);

bool compareVardai(studentas a, studentas b);
bool comparePavardes(studentas a, studentas  b);

list<studentas> nuskaitymas();
void spausdinimas(vector<studentas> sarasas);

#endif
