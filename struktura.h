#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <vector>
#include <map>
#include <chrono>
#include <random>

using hrClock = std::chrono::high_resolution_clock;

typedef std::uniform_int_distribution<int> int_distribution;

struct studentas {
	std::string vardas, pavarde;
	int nd;
};

studentas gen();
void spausdinimas(std::vector<studentas>& a);