#pragma once
#include <iostream>
#include <istream>
#include <math.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
#include <time.h>
#ifndef GRA_H
#define GRA_H

using namespace std;
class Gra
{
public:
	Gra() {

		cout << "\n Rozpoczynasz gre! Wpisuj komendy i powodzenia!\n";
		cout << " Twoja firma zatrudnia po jednym z pracownikow kazdego zawodu." << endl;
	}
	
	void granie();

private:
	double kapital_konczacy;
	float mozliwe_zadluzenie_stala;
};

#endif //!GRA_H