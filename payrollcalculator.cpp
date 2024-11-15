#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string name, payrollperiod;
	double id, msalary, lateminutes, hourlyrate;
	const int philhealth = 1000;
	const int pagibig = 800;
	const int sss = 1200;
	double totalsalary, totaldeducs, latededucs;
	
	cout << "Input employee's name: ";
	getline(cin, name);
	cout << "Input employee's id: ";
	cin >> id;
	cout << "Input Payroll Period: ";
	cin >> payrollperiod;
	cout << "Input monthly salary: ";
	cin >> msalary;
	cout << "Input lates and absences in minutes: ";
	cin >> lateminutes;
	
	hourlyrate = (msalary / 30) / 8;
	latededucs = (lateminutes / 60) * hourlyrate;
	double tax;
	
	tax = msalary * 0.12;
	
	totaldeducs = latededucs + philhealth + pagibig + sss + tax;
	totalsalary = msalary - totaldeducs;
	
	cout << "\n\nFEU - Institute of Technology" << endl << endl;
	
	cout << "Employee Name: " << name << endl;
	cout << "Employee ID: " << id << endl;
	cout << "Payroll Period " << payrollperiod << endl;
	cout << "Monthly Salary: " << msalary << endl;
	
	cout << "\nLates and absences (" << latededucs << ")" << endl;
	cout << "Philhealth (" << philhealth << ")" << endl;
	
	cout << "Pagibig (" << pagibig <<")" << endl;
	cout << "SSS (" << sss << ")" << endl;
	cout << "Withholding tax (" << tax << ")" << endl;
	cout << "\nTotal Earnings: " << msalary <<endl;
	cout << "Total Deduction " << totaldeducs << endl;
	
	cout << "Netpay: " << totalsalary;
	
	return 0;
}
