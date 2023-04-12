#include <iostream>
#include "Cell.cpp"
#include "vector"
#include "Animal.cpp"
#include <math.h>




int main(){
    Cell k;
    //k.add(1);
   // k.jahesh_K_DNA("T","A",2,0);
    Animal sam , ali;
    sam.c.add(3);
    //ali.c.add(1);
    string s1 = "GCATGCU";
    string s2 = "GATTACA";

    //int percentage = sam.simularity(ali);

    //cout << "Score: " << (sam == ali);
    Animal s = sam.asexual_reproduction();

    return 0;
}

