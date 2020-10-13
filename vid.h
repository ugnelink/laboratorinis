#pragma once

using namespace std;
#pragma once

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>
#include <fstream>

double vid(int egzaminas, vector<int>nd)
{
    double v;
    v = accumulate(nd.begin(), nd.end(), 0.000) / nd.size();

    return v;
}
