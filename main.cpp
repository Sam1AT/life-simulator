#include <iostream>
#include "Cell.h"
#include "vector"
#include "Animal.cpp"
#include <math.h>

int subcount(string s)
{
    return s.length() * (s.length() +1)/2;
}




int main(){
    Cell k;
    //k.add(1);
   // k.jahesh_K_DNA("T","A",2,0);
    Animal sam , ali;

    string s1 = "GCATGCU";
    string s2 = "GATTACA";

    int match_score = 2;
    int mismatch_score = -1;
    int gap_penalty = -2;

    int percentage = smith_waterman(s1, s2);

    cout << "Score: " << percentage;

    return 0;
}

