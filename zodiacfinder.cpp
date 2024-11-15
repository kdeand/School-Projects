#include <iomanip> 
#include <iostream> 
using namespace std; 

int main() { 
int month; 
int day; 

cout << "Check your Zodiac Sign! \n" << endl; 
cout << "Enter month: "; 
cin >> month; 
cout << "Enter day: "; 
cin >> day; 
 
string monthsarray[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//nested ifs 
	
	if(month == 1 && day >= 20 || month == 2 && day <= 18) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Aquarius" << endl; 
	} 
	
	else if(month == 2 && day >= 19 || month == 3 && day <= 20) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Pisces" << endl;	 
	} 
	
	else if(month == 3 && day >= 21 || month == 4  && day <= 19) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Aries" << endl;	 
	} 
	
	else if(month == 4 && day >= 20 || month == 5  && day <= 20) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Taurus" << endl; 
	} 
	
	else if(month == 5 && day >= 21 || month == 6  && day <= 20) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Gemini" << endl; 
	} 
	
	 
	else if(month == 6 && day >= 21 || month == 7  && day <= 22) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Cancer" << endl; 
	} 
	
	else if(month == 7 && day >= 23 || month == 8  && day <= 22) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Leo" << endl; 
	} 
	
	else if(month == 8 && day >= 23 || month == 9  && day <= 22) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Virgo" << endl; 
	} 
	
	else if(month == 9 && day >= 23 || month == 10  && day <= 22) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Libra" << endl; 
	} 
	
	else if(month == 10 && day >= 23 || month == 11  && day <= 22) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Scorpio" << endl; 
	} 
	
	else if(month == 11 && day >= 22 || month == 12  && day <= 21) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Sagittarius" << endl; 
	}	 
	
	else if(month == 12 && day >= 22 || month == 1  && day <= 19) { 
	cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day << " is Capricorn" << endl; 
	} 
	} 
