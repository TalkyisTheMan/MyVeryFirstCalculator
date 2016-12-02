/*Main game file
 *Warmachine(working title).
 *Text-based 
 *v0.1
 */ 


#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include "mainheader.h"
using namespace std;



int main(){
string menu;
        cout << "Warmachine\n";
        cout << "Play\n";
        cout << "Exit\n";
        getline(cin, menu);

            if(menu == "play"){
                maingame();
                cout << savedName(); << "\n";
            }else if(menu == "exit"){
                cout << "You exited\n";
            }
}
