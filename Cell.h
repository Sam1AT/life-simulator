#ifndef AP_MIDTERM_PROJECT_CELL_H
#define AP_MIDTERM_PROJECT_CELL_H
#include <iostream>
#include <string>
#include <vector>

class Genome {
public:
    std::string DNA1,DNA2;
    std::string RNA;
    void getDNA(std::string,std::string );
    void getRNA(std::string );
    void makeDNA();
    void jahesh_M_RNA(std::string);
    void jahesh_M_DNA(std::string);
    void jahesh_K_RNA(std::string,std::string,int);
    void jahesh_K_DNA(std::string,std::string ,int);
    void jahesh_B_RNA(std::string,std::string);
    void jahesh_B_DNA(std::string,std::string);
    friend class Animal;
    friend class Cell;



};

class Cell : Genome
{public:
   std::vector<Genome> CHR;
   void add(int);
   void death();
   void jahesh_B_DNA(std::string,int,std::string,int  );
   void jahesh_K_DNA(std::string,std::string ,int,int);
   friend class Animal;
    };


#endif //AP_MIDTERM_PROJECT_CELL_H