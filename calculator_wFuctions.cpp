#include<iostream>
#include<vector>
#include<string>
using namespace std;

int menu;
int number1;
int number2;

int add();
int subtract();
int multiply();
int devide();

int main(){

		

	cout << " What do you want to d?\n";
	cout << " 1 Add\n";
	cout << " 2 Subtract\n";
	cout << " 3 Multiply\n";
	cout << " 4 Devide\n";
	cout << " 5 Exit\n";
	cin >>  menu;
		

while(menu != 5){

	cout << "First number\n";
	cin >> number1;
	cout << "Secound number\n";
	cin >> number2;
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
}
}
return 1;
}

int add(){

	cout << "Answear: \n" << number1 + number2 << endl;
}

int subtract(){

      
        cout << "Answear: \n" << number1 - number2 << endl;
}

int multiply(){

        cout << "Answear: \n" << number1 * number2 << endl;
}

int devide(){
	
	
        cout << "Answear: \n" << number1 / number2 << endl;
}
