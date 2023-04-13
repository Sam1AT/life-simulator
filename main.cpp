#include <iostream>
#include "Cell.cpp"
#include "vector"
#include "Animal.cpp"
#include <math.h>

using namespace std;
/////////////////////////////////////////////////////////////
bool isNumber(const string& s)
{
    for (char const &ch : s) {
        if (std::isdigit(ch) == 0) 
            return false;
    }
    return true;
 }

void listAllAnimals(vector<string> s)
{
    for(int i=0; i < s.size(); i++)
    {
        cout << i + 1 <<") " << s[i] << endl;
    }
}


 /////////////////////////////////////////////////////////////


int main(){
    string option = "10";
    string n;
    string AnimalNametmp;
    vector<string> AnimalName;
    vector<Animal*> AnimalList;

    cout << "--------------------------------------------------------------------------------";
    cout << "|                       Welcome to the class of life app                       |" << endl;
    cout << "|                                 Authors :                                    |" << endl;
    cout << "|                           Sam Ahmadizadeh Tourzani                           |" << endl;
    cout << "|                           Elnaz                                              |" << endl;
    cout << "--------------------------------------------------------------------------------";

while(option != "0")
{
    cout<<"Please choose one of the options below (Enter a number): "<<endl;
    cout << "1) List of Animals." << endl;
    cout << "2) Making a new animal." << endl;
    cout << "3) Adding Chromosome to an Animal." << endl;
    cout << "4) Making DNA from a RNA." << endl;
    cout << "5) Small mutation." << endl;
    cout << "6) Big mutation." << endl;
    cout << "7) Reversed mutation." << endl;
    cout << "8) Finding all the palindroms of a Chromosome." << endl;
    cout << "*** For exit please enter 0 ***" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cin >> option;
    if(option == "1")
    {
        listAllAnimals(AnimalName);
    }
    else if(option == "2")
    {
        cout << "Choose a name for your animal(it could also include whitespaces)"  << endl;
        cin.ignore();
        getline(cin , AnimalNametmp);
        Animal* tmp = new Animal;
        AnimalName.push_back(AnimalNametmp);
        AnimalList.push_back(tmp);
        cout << "How many Chromosomes you want to add to your animals' cell?" << endl;
        cout << "(After giving your number write your DNA sequences)" << endl;
        cin >> n;
        while(!isNumber(n))
        {
            cout << "! ! !   Invalid argument   ! ! !" << endl;
            cin >> n;
        }
        tmp->c.add(stoi(n));
        cout << "Animal added ! ! !" << endl;
    }
    else if(option == "3")
    {

    }
    else if(option == "4")
    {

    }
    else if(option == "5")
    {

    }
    else if(option == "6")
    {

    }
    else if(option == "7")
    {

    }
    else if(option != "0" || !isNumber(option))
    {
        cout << "! ! !    Invalid option please choose a valid one   ! ! !" << endl;
    }
}


cout << "Thanks for using our app =)";




}

