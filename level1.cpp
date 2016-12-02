#include<iostream>
#include<string>
#include<fstream>
#include"mainheader.h"
using namespace std;

string name;


int maingame() {
    cout << "Hi, my name is Emty! And you are?\n";
    getline(cin, name);
    cout << "Hi " << name << "\n";
    //Save the name
    ofstream nameSave;
    nameSave.open("PlayerName.txt");
    nameSave << name << endl;
    nameSave.close();
    //Open the name file
    
    return 0;
}
string savedName(){
     ifstream savedName;
    savedName.open("PlayerName.txt");
    
    
return savedName;
}
