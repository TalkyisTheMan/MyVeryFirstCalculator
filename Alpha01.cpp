#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Variables
string line;

//Function Declaratiopns
int FileIO();

int main(){
    

    
 
getr:
        getline(cin, line);
       
    
    
    //Opening the file
    ofstream charint;
    charint.open("Hello");
    //Writing to the file
    charint << line;
    
    if(charint.eof()){
        goto getr;
    }

    //Closing the file
    charint.close();
     while(1);
}
