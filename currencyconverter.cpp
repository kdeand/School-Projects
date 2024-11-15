#include <iostream>
#define char = 1
using namespace std;

int main() {
	
	cout << "Money Converter" << endl;
	
	double php;
	double usd,euro,yuan,koruna,krone,sheqel,dinar;
	
	cout << "Enter Philippine Peso: ";
	cin >> php;
	
	usd = php*0.0177;
	euro = php*0.0159;
	yuan = php*0.1283;
	koruna = php*0.3961;
	krone = php*0.1256;
	sheqel = php*0.0668;
	dinar = php*0.0055; 

	cout << "\nThe amount's equivalent to: " << endl; 
	cout << "\nUS Dollar is\t : \t" << usd << endl;
	cout << "Euro\t\t : \t" << euro << endl;
	cout << "Yuan\t\t : \t" << yuan << endl;
	cout << "Koruna\t\t : \t" << koruna << endl;
	cout << "Krone\t\t : \t" << krone << endl;
	cout << "Sheqel\t\t : \t" << sheqel << endl;
	cout << "Dinar\t\t : \t" << dinar << endl;
	
	
	
	return 0;
	}
