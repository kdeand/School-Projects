#include <iostream>
#include <cctype>
#include <cmath>
#define PI 3.141592
using namespace std;

int main() {
	
	char figure;
	int side;
	int l, w, h;
	double r;
	
	cout << "Volume Figures: " << endl;

string figlist[3][2] = {{"C", "Cube"},
						{"R", "Rectangular Prism"},
						{"S", "Sphere"}};
	
	 for (int i = 0; i < 3; i++) {
        cout << "[" << figlist[i][0] << "]  " << figlist[i][1] << endl;
    }
	cout << "Choose figure: ";
	cin >> figure;
	figure = tolower(figure); //to accept any capitalization
	double rvolume, cvolume, svolume;
	
	switch (figure){
	
	
		case 'c':
		
			cout << "You have chosen " << figlist[0][1] << endl;
			cout << "Enter length of side: ";
			cin >> side;
				cvolume = (side*side*side);
			cout << "Volume of cube is: " << cvolume;
			break;
			
		case 'r':
			
			cout << "You have chosen " << figlist[1][1] << endl;
			cout << "Enter length: ";
			cin >> l;
			cout << "Enter Width: ";
			cin >> w;
			cout << "Enter Height: ";
			cin >> h;
			rvolume = l * w * h;
			cout << "Volume of Rectangular Prism is: " << rvolume;
			break;
			
		case 's':
			cout << "You have chosen " << figlist[2][1] << endl;
			cout << "Enter radius: ";
			cin >> r;
			svolume = (pow(r, 3)) * (4.0 / 3.0) * (PI) ;
			cout << "Volume of Sphere is: " << svolume;
	}
}
