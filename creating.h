#ifndef CREATING_H_INCLUDED
#define CREATING_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <bits/stdc++.h>
#include <random>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <list>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::list;
using std::endl;

int generavimas(int, string);

int eilute(string);

#include "struktura.h"

bool palyginimas(const duomuo &a, const duomuo &b);
bool palyginimas2(const duomuo &a, const duomuo &b);

int vektorius1(vector<duomuo> Eil_vect, int kiek);

int vektorius2(vector<duomuo> Eil_vect, int kiek);

int vektorius3(vector<duomuo> Eil_vect, int kiek);

int vektorius4(vector<duomuo> Eil_vect, int kiek);

int isvedimas (vector<duomuo> Vekt, int kiek, string failas);

int isvedimas (list<duomuo> Listas, int kiek, string failas);

int listas1(list<duomuo> sarasas, int kiek);

int listas2(list<duomuo> sarasas, int kiek);

int listas3(list<duomuo> sarasas, int kiek);

int listas4(list<duomuo> sarasas, int kiek);
#endif // CREATING_H_INCLUDED
