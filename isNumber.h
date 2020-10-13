#pragma once

using namespace std;

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>
#include <fstream>

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;

    return true;
}
