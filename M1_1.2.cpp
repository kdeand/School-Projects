#include <iostream>
#define PI 3.14159265
using namespace std;
int choice;
char ans;
double sqr;
double l, w, b, h, r, side;

int square(int side);
int rectangle(int l, int w);
int triangle(int b, int h);
int circle(int r);
int square(int side);


int main() {	
	
	do {
	cout << " ***************** " << endl;
	cout << "\tMENU" << endl;
	cout << " ***************** " << endl;
	
	cout << "[1] Area of a Square " << endl;
	cout << "[2] Area of a Rectangle " << endl;
	cout << "[3] Area of a Triangle " << endl;
	cout << "[4] Area of a Circle " << endl;
	cout << "[5] Exit " << endl;
	
	cout << " ---------------- " << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	
	switch(choice) {
		case 1:
			square(side);
			break;
		case 2:
			rectangle(l,w);
			break;
		case 3:
			triangle(b,h);
			break;
		case 4:
			circle(r);
			break;
		case 5:
			cout << "Thank you!";
			return 0;
			break;
		default:
			break;
	}
	
	cout << "\n\nPress y or Y to continue: ";
	cin >> ans;
	cout << "\n";
	
} while (ans == 'y'|| ans == 'Y'); 

return 0;

}

int square(int side){
			cout << "------------------ " << endl;
			cout << " AREA OF A SQUARE " <<endl;
			cout << " ---------------- " << endl << endl;
			cout << "Enter the side of the square: ";
			cin >> side;
			sqr = side * side;
			cout << "The area is " << sqr << " sq. units";
}

int rectangle(int l, int w) {
			cout << "--------------------- " << endl;
			cout << " AREA OF A RECTANGLE " <<endl;
			cout << "--------------------- " << endl << endl;
			cout << "Enter the length: ";
			cin >> l;
			cout << "Enter the width: ";
			cin >> w;
			sqr = l*w;
			cout << "The area is " << sqr << " sq. units";
}

int triangle(int b, int h) {
			cout << "-------------------- " << endl;
			cout << " AREA OF A Triangle " <<endl;
			cout << "-------------------- " << endl << endl;
			cout << "Enter the base: ";
			cin >> b;
			cout << "Enter the height: ";
			cin >> h;
			sqr = (b*h) / 2;
			cout << "The area is " << sqr << " sq. units";
}

int circle(int r) {
			cout << "------------------" << endl;
			cout << " AREA OF A CIRCLE " <<endl;
			cout << "------------------" << endl << endl;
			cout << "Enter the radius: ";
			cin >> r;
			sqr = PI * (r * r);
			cout << "The area is " << sqr << " sq. units";
}


