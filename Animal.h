#ifndef AP_MIDTERM_PROJECT_ANIMAL_H
#define AP_MIDTERM_PROJECT_ANIMAL_H
#include <iostream>
#include <string>
#include <vector>
#include "Cell.h"
using namespace std;

class Animal : Cell{
private:
float findStringSimilarity(string , string );
int getEditDistance(string , string );

public:
Cell c;
float simularity(Animal);
bool operator ==(Animal obj);
Animal operator +(Animal obj);
Animal asexual_reproduction();
void death();
friend class Cell;
friend class Genome;
friend class Virus;


};


class Virus : Genome{
public:
Genome r;
bool canInfect(Animal);

friend class Animal;


};

#endif //AP_MIDTERM_PROJECT_ANIMAL_H