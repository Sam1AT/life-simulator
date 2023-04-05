#ifndef AP_MIDTERM_PROJECT_GENOME_H
#define AP_MIDTERM_PROJECT_GENOME_H
#include <iostream>
#include <string>

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


};


#endif //AP_MIDTERM_PROJECT_GENOME_H
