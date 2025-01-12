#include <iostream>
using namespace std;
string option;
int choice;
int arrSize;
double answer;
double x, y;
char ans;

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int remainder(int x, int y);
int ask(int x, int y);


int main() {
	
do {
	string option[] = {"Add", "Subtract", "Multiply", "Divide", "Modulus"};
	arrSize = sizeof(option)/sizeof(option[1]);
		
	cout << "==================================== " << endl;
	cout << " \t\t MENU" << endl;
	cout << "==================================== " << endl;
	
	for (int i = 0; i < arrSize; i++) {
		cout << "[" << i + 1 << "] " << option[i] << endl;
	}
	
		cout << "Choose an operation(1-5): ";
		choice -= 1;
		cin >> choice;
		cout << endl;
		
		
	switch (choice) {
		case 1: 	
			add(x, y);
			break;
		case 2: 	
			subtract(x, y);
			break;
		case 3: 	
			multiply(x, y);
			break;
		case 4: 	
			divide(x, y);
			break;	
		case 5: 	
			remainder(x, y);
			break;	
		default:
			return 0;	
	}
	cout << "\n\nPress y or Y to continue: ";
	cin >> ans;
	cout << "\n";

} while ( ans == 'y' || ans == 'Y');
return 0;
}



int add(int x, int y){
	cout << "Input first number: ";
	cin >> x;
	cout << "Input second number: ";
	cin >> y;
	answer = x + y;
	cout << x << " + " << y << " is = " << answer;
}

int subtract (int x, int y) {
	cout << "Input first number: ";
	cin >> x;
	cout << "Input second number: ";
	cin >> y;
	answer = x - y;
	cout << x << " - " << y << " is = " << answer;
}

int multiply (int x, int y) {
cout << "Input first number: ";
	cin >> x;
	cout << "Input second number: ";
	cin >> y;
	answer = x * y;
	cout << x << " * " << y << " is = " << answer;
}
int divide (int x, int y) {
cout << "Input first number: ";
	cin >> x;
	cout << "Input second number: ";
	cin >> y;
	answer = x / y;
	cout << x << " / " << y << " is = " << answer;
}

int remainder (int x, int y) {
	cout << "Input first number: ";
	cin >> x;
	cout << "Input second number: ";
	cin >> y;
	answer = x % y;
	cout << x << " % " << y << " is = " << answer << endl;
}




