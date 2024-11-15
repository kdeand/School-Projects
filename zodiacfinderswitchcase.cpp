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
 
 cout << "Zodiac Sign for " << monthsarray[month - 1] << " " << day;
switch(month) {
	
	case 1: 
		if (day >= 20) {
			cout << " is Aquarius.";
		} else {
			cout << " is Capricorn.";
		} break;
		
	case 2: 
		if (day <= 18) {
			cout << " is Aquarius.";
		} else {
			cout << " is Pisces.";
		} break;
		
	case 3: 
		if (day <= 20) {
			cout << " is Pisces.";
		} else {
			cout << " is Aries.";
		} break;
		
	case 4: 
		if (day <= 19) {
			cout << " is Aries.";
		} else {
			cout << " is Taurus.";
		} break;

	case 5: 
		if (day <=20) {
			cout <<  " is Taurus.";
		
		} else {
			cout << " is Gemini.";
		} break;
		
	case 6: 
		if (day <= 20) {
			cout << " is Gemini.";
		} else {
			cout << " is Cancer.";
		} break;
		
	case 7: 
		if (day <= 22) {
			cout <<  " is Cancer.";
		} else {
			cout <<  " is Leo.";
		} break;
		
	case 8: 
		if (day <= 22) {
			cout << " is Leo.";
		} else {
			cout << " is Virgo";
		} break;	
		
	case 9: 
		if (day <= 22) {
			cout <<  " is Virgo.";
		} else {
			cout  << " is Libra.";
		} break;
		
	case 10: 
		if (day <= 22) {
			cout << " is Libra.";
		} else {
			cout << " is Scorpio.";
		} break;
	case 11: 
		if (day <= 21) {
			cout << " is Scorpio.";
		} else {
			cout << " is Sagittarius.";
		} break;
		
	case 12: 
		if (day <= 21) {
			cout << " is Sagittarius.";
		} else {
			cout << " is Capricorn.";
		} break;
		
	default:
		cout << "Invalid. Try again.";
} }
