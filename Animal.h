#ifndef AP_MIDTERM_PROJECT_ANIMAL_H
#define AP_MIDTERM_PROJECT_ANIMAL_H
#include <iostream>
#include <string>
#include <vector>
#include "Cell.h"
using namespace std;

class Animal : Cell{
private:
float smith_waterman(string, string);
public:
Cell c;
float simularity(Animal);
bool operator ==(Animal const& obj);
Animal operator +(Animal const& obj);
Animal asexual_reproduction();
void death();
friend class Cell;
friend class Genome;

};

#endif //AP_MIDTERM_PROJECT_ANIMAL_H