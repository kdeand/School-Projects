#include <iostream>
using namespace std;

int main() {
	
	int *p, v, *p1;
	p = new int;
	*p = 24;
	cout << "p = " << *p << endl;

	p1 = new int;
	p1 = p;
	cout << "p1 = " << *p1 << endl;;
	p1 = new int;
	*p1 = 12;
	
	int *pointer; 
	pointer = new int;
	*pointer = 567;
	
	cout << "pointer = " << *pointer << endl;
	
	pointer = new int;
	pointer = p;
	cout << "pointer = " << *pointer << endl;
	
	
	string *pstring;
	
	pstring = new string;
	*pstring = "Deanna";
	
	cout << "pstring = " << *pstring << endl;
	cout << "pp1 new value = " << *p1 << endl;
	
}
