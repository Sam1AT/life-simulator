#ifndef AP_MIDTERM_PROJECT_CELL_H
#define AP_MIDTERM_PROJECT_CELL_H
#include <iostream>
#include <string>
#include <vector>

class Genome {
protected:
friend std::vector<std::string> eshterak(std::vector<std::string> vector1, std::vector<std::string> vector2);
std::vector<std::string> findSubstrings();

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
    
    friend class Cell;
    friend class Virus;



};

class Cell : Genome
{public:
    std::vector<Genome> CHR;
    void add(int);
    void death();
    void jahesh_B_DNA(std::string,int,std::string,int  );
    void jahesh_K_DNA(std::string,std::string ,int,int);
    std::vector<std::string> getInterAll();
    void palindrome(int );
    private:
    bool validateSequence(std::string seq);
    void getValidSequence(std::string &s);
    bool check(std::string);

   friend class Animal;
    };


#endif //AP_MIDTERM_PROJECT_CELL_H