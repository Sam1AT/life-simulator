#include <iostream>
#include "Cell.h"
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void Genome::getDNA(string a,string b){
    DNA1=a;
    DNA2=b;
}

void Genome::getRNA(string c){
    RNA=c;
}
void Genome::makeDNA(){
    string DNA="";
    for(int i=0;i<RNA.length();i++){
        if (RNA[i]=='A'){
            DNA+='T';
        }
        else if (RNA[i]=='T'){
            DNA+='A';
        }
        else if (RNA[i]=='G'){
            DNA+='C';
        }
        else if (RNA[i]=='C'){
            DNA+="G";
        }
    }
    cout<<"Your RNA is : " << RNA <<endl;
    cout<<"The DNA from RNA above is : "<<DNA<<endl;
}

void Genome::jahesh_M_RNA(string S1) {
    string S2="";
    for(int i=0;i<S1.length();i++){
        if (S1[i]=='A'){
            S2+='T';
        }
        else if (S1[i]=='T'){
            S2+='A';
        }
        else if (S1[i]=='G'){
            S2+='C';
        }
        else if (S1[i]=='C'){
            S2+="G";
        }
    }
    size_t pos=RNA.find(S1);
    while(pos !=string::npos){
        RNA.replace(pos,S1.length(),S2);
        pos=RNA.find(S1,pos +1);}
    cout<<RNA<<endl;
}

void Genome::jahesh_M_DNA(string S1) {
    string S2="";
    for(int i=0;i<S1.length();i++){
        if (S1[i]=='A'){
            S2+='T';
        }
        else if (S1[i]=='T'){
            S2+='A';
        }
        else if (S1[i]=='G'){
            S2+='C';
        }
        else if (S1[i]=='C'){
            S2+="G";
        }
    }
    size_t pos1,pos2;
    pos1=DNA1.find(S1);
    pos2=DNA2.find(S1);
    if(pos1<pos2){
        DNA1.replace(pos1,S1.length(),S2);
        DNA2.replace(pos1,S2.length(),S1);
    }
    if(pos2<pos1){
        DNA2.replace(pos2,S1.length(),S2);
        DNA1.replace(pos2,S2.length(),S1);
    }
    cout<<DNA1<<endl;
    cout<<DNA2<<endl;
}
void Genome ::jahesh_K_RNA(string S1,string S2, int n) {
    size_t pos=RNA.find(S1);
    for(int i=0;i<n;i++) {
        RNA.replace(pos, 1, S2);
        pos = RNA.find(S1, pos + 1);
    }
    cout<<RNA<<endl;
}

void Genome ::jahesh_K_DNA(string S1,string S2, int n) {
    string DNA_1=DNA1;
    string DNA_2=DNA2;
    string S3;
    if (S2=="A"){
        S3="T";
    }
    else if (S2=="T"){
        S3="A";
    }
    else if (S2=="G"){
        S3="C";
    }
    else if (S2=="C"){
        S3="G";
    }
    string S4;
    if (S1=="A"){
        S4="T";
    }
    else if (S1=="T"){
        S4="A";
    }
    else if (S1=="G"){
        S4="C";
    }
    else if (S1=="C"){
        S4="G";
    }
    int counter=0;
    while(counter<n){
        for(int i=0;i<DNA1.length();i++){
            if(DNA1[i]==S1[0]){
                counter+=1;
                DNA1.replace(i,1,S2);
                if(counter==n){
                    break;}
            }
            if(DNA2[i]==S1[0]){
                counter+=1;
                DNA2.replace(i,1,S2);}
            if(counter==n){
                break;
            }
            else{
                continue;
            }
        }
    }
    int counter2=0;
    while(counter2<n){
        for(int j=0;j<DNA1.length();j++){
            if(DNA_1[j]==S4[0]){
                counter2+=1;
                DNA1.replace(j,1,S3);
                if(counter2==n){
                    break;}
            }
            if(DNA_2[j]==S4[0]){
                counter2+=1;
                DNA2.replace(j,1,S3);}
            if(counter2==n){
                break;
            }
            else{
                continue;
            }
        }
    }
    cout<<"The replace DNA1 is : "<<DNA1<<endl;
    cout<<"The replace DNA2 is : "<<DNA2<<endl;
}


void Genome::jahesh_B_RNA(string S1, string S2) {
    size_t pos=RNA.find(S1);
    RNA.replace(pos,S2.length(),S2);
    cout<<RNA<<endl;
}

void Genome::jahesh_B_DNA(string S1, string S2) {
    string S3="";
    for(int i=0;i<S2.length();i++){
        if (S2[i]=='A'){
            S3+='T';
        }
        else if (S2[i]=='T'){
            S3+='A';
        }
        else if (S2[i]=='G'){
            S3+='C';
        }
        else if (S2[i]=='C'){
            S3+="G";
        }
    }

    size_t pos1,pos2;
    pos1=DNA1.find(S1);
    pos2=DNA2.find(S1);
    if(pos1<pos2){
        DNA1.replace(pos1,S2.length(),S2);
        DNA2.replace(pos1,S3.length(),S3);
    }
    if(pos2<pos1){
        DNA1.replace(pos2,S3.length(),S3);
        DNA2.replace(pos2,S2.length(),S2);
    }
    cout<<DNA1<<endl;
    cout<<DNA2<<endl;
}

vector<string> Genome::findSubstrings()
{
    string str = this->DNA1;
    vector<string> ans;
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            ans.push_back(subStr);
        }
    }
    str = this->DNA2;
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            ans.push_back(subStr);
        }
    }

    str = this->RNA;
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            ans.push_back(subStr);
        }
    }
    return ans;
}




///////////////////////////////////////////////////////

vector<string> eshterak(vector<string> vector1, vector<string> vector2)
{
    vector<string> ans;
    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());

    vector<string> v(vector1.size() + vector2.size());
    vector<string>::iterator it, st;

    it = set_intersection(vector1.begin(),
                          vector1.end(),
                          vector2.begin(),
                          vector2.end(),
                          v.begin());

    
    for (st = v.begin(); st != it; ++st)
        ans.push_back(*st);

    return ans;


}


//////////////////////////////////////////////////////

bool Cell::validateSequence(string seq)
{
    for (char const &ch : seq) {
        if (ch != 'A' && ch != 'T' && ch != 'C' && ch != 'G') 
            return false;
    }
    return true;
 }

void Cell::getValidSequence(string &s)
{
    cin >> s;
        while(!validateSequence(s))
        {
            cout << "! ! !  Invalid sequence. you must only use ATGC in your RNA or DNA  ! ! !" << endl;
            cin >> s;
        }
}

void Cell::death()
{
        for (int j = 0; j < CHR.size(); j++)
        {
            int n = 0, A_T = 0, C_G = 0;
            for (int i = 0; i < CHR[j].DNA1.length(); i++)
            {
                if (CHR[j].DNA1[i]!=CHR[j].DNA2[i] )
                {
                    n++;
                }
                if (CHR[j].DNA1[i] == 'A' or CHR[j].DNA1[i] == 'T')
                {
                    A_T++;
                }
                else
                {
                    C_G++;
                }
            }
            if (n >= 5 or A_T >= 3 * C_G)
            {
                // del
            }
        }

}

void Cell::add(int n) {
    Genome j;
    for(int p=0;p<n;p++){
        string t,k;
        cout << p+1 << " Chrmosome , " << "Enter your First DNA sequence" << endl;
        getValidSequence(k);
        cout << "Enter your Second DNA sequence" << endl;
        getValidSequence(t);
        j.DNA1=k;
        j.DNA2=t;
        CHR.push_back(j);
    }
}


void Cell::jahesh_B_DNA(string S1,int n, string S2, int m) {
    string s1 = "";
    for (int i = 0; i < S1.length(); i++) {
        if (S1[i] == 'A') {
            s1 += 'T';
        } else if (S1[i] == 'T') {
            s1 += 'A';
        } else if (S1[i] == 'G') {
            s1 += 'C';
        } else if (S1[i] == 'C') {
            s1 += "G";
        }
    }
    string s2 = "";
    for (int j = 0; j < S1.length(); j++) {
        if (S2[j] == 'A') {
            s2 += 'T';
        }
        else if (S2[j] == 'T') {
            s2 += 'A';
        }
        else if (S2[j] == 'G') {
            s2 += 'C';
        }
        else if (S2[j] == 'C') {
            s2 += "G";
        }}
        size_t p1, p2;
        if (CHR[n].DNA1.find(S1) < CHR[n].DNA2.find(S1)) {
            p1 = CHR[n].DNA1.find(S1);
            CHR[n].DNA1.replace(p1, S2.length(), S2);
            CHR[n].DNA2.replace(p1, s2.length(), s2);
        }
        if(CHR[n].DNA1.find(S1) > CHR[n].DNA2.find(S1)){
            p1 = CHR[n].DNA2.find(S1);
            CHR[n].DNA2.replace(p1, S2.length(), S2);
            CHR[n].DNA1.replace(p1, s2.length(), s2);
        }
        if (CHR[m].DNA1.find(S2) < CHR[m].DNA2.find(S2)) {
            p2 = CHR[m].DNA1.find(S2);
            CHR[m].DNA1.replace(p2, S1.length(), S1);
            CHR[m].DNA2.replace(p2, s1.length(), s1);
        }
        if(CHR[m].DNA1.find(S2) > CHR[m].DNA2.find(S2)) {
            p2 = CHR[m].DNA2.find(S2);
            CHR[m].DNA2.replace(p2, S1.length(), S1);
            CHR[m].DNA1.replace(p2, s1.length(), s1);
        }
        cout << CHR[n].DNA1 << endl;
        cout << CHR[n].DNA2 << endl;
        cout << CHR[m].DNA1 << endl;
        cout << CHR[m].DNA2 << endl;

    }

    void Cell::jahesh_K_DNA(string S1, string S2, int n, int m) {
        string DNA_1=CHR[m].DNA1;
        string DNA_2=CHR[m].DNA2;
            string S3;
            if (S2=="A"){
                S3="T";
            }
            else if (S2=="T"){
                S3="A";
            }
            else if (S2=="G"){
                S3="C";
            }
            else if (S2=="C"){
                S3="G";
            }
            string S4;
            if (S1=="A"){
                S4="T";
            }
            else if (S1=="T"){
                S4="A";
            }
            else if (S1=="G"){
                S4="C";
            }
            else if (S1=="C"){
                S4="G";
            }
            int counter=0;
            while(counter<n){
                for(int i=0;i<CHR[m].DNA1.length();i++){
                    if(CHR[m].DNA1[i]==S1[0]){
                        counter+=1;
                        CHR[m].DNA1.replace(i,1,S2);
                        if(counter==n){
                            break;}
                    }
                    if(CHR[m].DNA2[i]==S1[0]){
                        counter+=1;
                        CHR[m].DNA2.replace(i,1,S2);}
                    if(counter==n){
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            int counter2=0;
            while(counter2<n) {
                for (int j = 0; j < CHR[m].DNA1.length(); j++) {
                    if (DNA_1[j] == S4[0]) {
                        counter2 += 1;
                        CHR[m].DNA1.replace(j, 1, S3);
                        if (counter2 == n) {
                            break;
                        }
                    }
                    if (DNA_2[j] == S4[0]) {
                        counter2 += 1;
                        CHR[m].DNA2.replace(j, 1, S3);
                    }
                    if (counter2 == n) {
                        break;
                    } else {
                        continue;
                    }
                }
            }
            cout<<CHR[m].DNA1<<endl;
            cout<<CHR[m].DNA2<<endl;
        }


vector<string> Cell::getInterAll()
{
    vector<string> ans;
    ans = this->CHR[0].findSubstrings();
    for(int i=1; i < this->CHR.size(); i++)
        ans = eshterak(ans , this->CHR[i].findSubstrings());

    sort( ans.begin(), ans.end() );
    ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
    
    return ans;

}