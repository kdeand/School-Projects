#include <iostream>
#include <cmath> 
using namespace std;

double x, y; 
int opchoice;
int add(double x, double y);
int sub(double x, double y);
int mul(double x, double y);
int mod(double x, double y);
int power(double x, double y);

int main() {
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Modulo" << endl;
	cout << "5. Power" << endl;
	cout << "Choose an operator: ";
	cin >> opchoice;
	
	
	cout << "Input first integer: ";
	cin >> x;
	cout << "Input second integer: ";
	cin >> y;
	
	switch(opchoice) {
		case 1:
			add(x,y);
			break;
		case 2:
			sub(x,y);
			break;
		case 3:
			mul(x,y);
			break;
		case 4:
			mod(x,y);
			break;
		case 5:
			power(x,y);
			break;
		default:
			cout << "Invalid." << endl;
			main();
			return 0;
	}
	
	return 0;
}

int add(double x, double y) {
	double sum; 
	sum = x + y;
	cout << x << " + " << y << " = " << sum << endl;
	return 0;
}

int sub(double x, double y) {
	double difference; 
	difference = x - y;
	cout << x << " - " << y << " = " << difference << endl;
	return 0;
}

int mul(double x, double y) {
	double product; 
	product = x * y;
	cout << x << " * " << y << " = " <<  product << endl;
	return 0;
}
int mod(double x, double y) {
	double rem = fmod(x, y);
    cout << x << " % " << y << " = " << rem << endl;
    return 0;
}

int power(double x, double y) {
	double raise; 
	raise = pow(x, y);
	cout << x << " ^ " << y << " = " << raise << endl;
	return 0;
}


