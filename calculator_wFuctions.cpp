#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int menu;
float number1;
float number2;

int add();
int subtract();
int multiply();
int devide();
int Delta();
int basic_Calc();

int main(){

 do{

    cout << " What do you want to d?\n";
    cout << " 1 Add\n";
    cout << " 2 Subtract\n";
    cout << " 3 Multiply\n";
    cout << " 4 Devide\n";
    cout << " 5 Delta\n";
    cout << " 6 Exit\n";
    cin >>  menu;





 switch(menu){
    case 1:
     add();
     break;
    case 2:
     subtract();
     break;
    case 3:
     multiply();
     break;
    case 4:
     devide();
     break;
    case 5:
     Delta();
     break;
}
}while(menu != 6);
return 1;
}

int basic_Calc(){

    cout << "First number\n";
    cin >> number1;
    cout << "Secound number\n";
    cin >> number2;
}

int add(){
    basic_Calc();
    cout << "Answear: \n" << number1 + number2 << endl;
}

int subtract(){

        basic_Calc();
        cout << "Answear: \n" << number1 - number2 << endl;
}

int multiply(){

        basic_Calc();
        cout << "Answear: \n" << number1 * number2 << endl;
}

int devide(){

        basic_Calc();
        cout << "Answear: \n" << number1 / number2 << endl;
}
int Delta(){
 float a;
 float b;
 float c;

    cout << "A: \n";
    cin >> a;
    cout << "B: \n";
    cin >> b;
    cout << "C: \n";
    cin >> c;

 float delta = pow(b, 2) - 4* a * c;
     cout << delta << endl;

 float x1 = -b + sqrt(delta) / 2 * a;
 float x2 = -b - sqrt(delta) / 2 * a;

 if(delta < 0){

     cout << "No Answear, D is less than 0: " << delta << endl;

 }
 if(delta == 0){
     float x = -b / 2 * a;
     cout << "X is: " << x << endl;

 }

 if(delta > 0){

     cout << "X1: " << x1 << endl;
     cout << "X2: " << x2 << endl;

 }


}
