#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <limits>
#include <Windows.h>
using namespace std; 


//global variables used by every funcction
string name;
string email;
string mobileNumber;
string accNum;
int cschoice;
int carchoice;
char confirm = 'y';
string color; 
string transmission; 
string platenum; 
string gastype; 
string year;
string suitcasecap;
string cartype;
string carname;
const int compactprice = 2700;
const int suvprice = 5100;
const int vanprice = 8000;
int duration;
double totalPrice;
string carseat;
double price;

int main();
int listcars();

int exit() {
	cout << "\t\t\t\t\t\tPlease restart the program.";
	exit(0); 

}


//	system("0e");
int invoice() { //invoice function
	
	switch (cschoice) {
		
		case 1: 
			carseat = "Compact Car";
			price = compactprice;
			break;
			
		case 2: 
			carseat = "Sports Utility Vehicle (SUV)";
			price = suvprice;
			break;
			
		case 3: 
			carseat = "Van - 12 seater";	
			price = vanprice;
			break;
			
		default: 
			cout << "\t\t\t\t\t\t    Error Occured.";
			exit();
	}

    const int width = 35;

    cout << setw(width) << setfill(' ') << "" << endl; // Empty line for spacing
    cout << "\n\n\t\t\t\t\t\t +------------------------+" << endl;
    cout << setw(width) << setfill(' ') << "\t\t\t\t\t\t |\t   Invoice \t  |" << endl;
    cout << "\t\t\t\t\t\t +------------------------+" << endl;
    cout << setw(width) << setfill(' ') << "" << endl; // Separator line


	cout << "\t\t\t\t+----------------------------------------------------------+" << endl;	
	cout << left << setw(width) << "\t\t\t\t  Name: " << name << endl;
    cout << left << setw(width) << "\t\t\t\t  Email: " << email << endl;
    cout << left << setw(width) << "\t\t\t\t  Mobile Number: " << mobileNumber << endl;
    cout << "\t\t\t\t+----------------------------------------------------------+" << endl;
    cout << left << setw(width) << "\t\t\t\t  Car type: " << carseat << endl;
    cout << left << setw(width) << "\t\t\t\t  Car Name: " << carname << endl;
    cout << left << setw(width) << "\t\t\t\t  Year: " << year << endl;
    cout << left << setw(width) << "\t\t\t\t  Color: " << color << endl;
    cout << left << setw(width) << "\t\t\t\t  Transmission: " << transmission << endl;
    cout << left << setw(width) << "\t\t\t\t  Plate Number: " << platenum << endl;
    cout << left << setw(width) << "\t\t\t\t  Suitcase Capacity: " << suitcasecap << endl;
    cout << left << setw(width) << "\t\t\t\t  Gas Type: " << gastype << setw(width) << endl;
    cout << left << setw(width) << "\t\t\t\t  Price per day: " << "$"<< price << setw(width) << endl;
    // 
    // Total price output
    cout << "\t\t\t\t+----------------------------------------------------------+" << endl;
    cout << left<< setw(width) <<"\t\t\t\t\t Total Price:" << "$" << totalPrice << endl;
	cout << "\t\t\t\t+----------------------------------------------------------+" << endl;

						cout << endl;
    					cout << "\t\t\t\t\t   Confirm your choice (y/n): ";//for confirmation
		            	cin >> confirm;	            	
						cout << "\n\t\t\t\t\t+-----------------------------------+" << endl;
						
						
						if (confirm != 'y' && confirm == 'n') {
					main();
						return 0;
					} else {
						cout << "\n\t\t\t\t\tYou have 24 hours to change your booking. \n\t\t\t\tPlease contact the office for more details and clarifications.";
					}
	return 0;

 

}


int calculate() { //calculate the total price of booking

	
	
 while (true) {
        cout << "\n\t\t\t\t    Please input the duration of the rental (days): ";
        
        if (cin >> duration) {
            break; // Exit the loop if input is valid
        } else {
            cout << "\n\t\t\t\tInvalid input. Please enter number of days." << endl;
            cin.clear(); // Clear the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        }
    }

    totalPrice = duration * price;
    cout << "\n" << "\t\t\t\t\tYour total Price is: " << totalPrice;

    system("CLS");
    invoice(); // Assuming invoice() is defined elsewhere

    return 0; // Return a value to indicate success
}



int listcars() { //list all the cars based on cases
    //arrays for cars
		     
		//four seater arrays
    string fourseaterArr[] = {"Toyota Vios", "Honda City", "Hyundai Accent", "Suzuki Swift", "Mazda2"};
    string fourseat_transmission[] = {"Automatic", "Manual", "Automatic", "Manual", "Automatic"};
    string fourseat_status[] = {"Available", "Unvailable", "Available", "Available", "Available"};
    string fourseat_fuel[] = {"Petrol", "        Petrol","Diesel","        Petrol","Petrol"};

	//six seater arrays
    string sixseaterArr[] = {"Toyota Fortuner", "Ford Everest", "Nissan Terra", "Isuzu mu-X"};
    string sixseat_transmission[] = {"Automatic", "Automatic", "Manual", "Automatic", "Manual"};
    string sixseat_status[] = {"Available", "Unavailable", "Available", "Available", "Available"};
    string sixseat_fuel[] = {"Diesel", "Diesel","        Diesel","Diesel","Diesel"};

	//eight seater array (papalitan ung 8-steater to 12-seater)
	string eightseaterArr[] = {"Toyota HiAce", "Hyundai Starex", "Ford Transit", "Toyota Grandia"};
	string eightseat_transmission[] = {"Automatic", "Automatic", "Automatic", "Manual", "Automatic"};
	string eightseat_status[] = {"Available", "Available", "Available", "Available", "Available"};
	string eightseat_fuel[] = {"Diesel", "Diesel","Diesel","        Diesel","Diesel"};

  
    //arrcounts
    
   int fourseater = sizeof(fourseaterArr) / sizeof(fourseaterArr[0]); //Num of items in the array
   int sixseater = sizeof(sixseaterArr) / sizeof(sixseaterArr[0]);
   int eightseater = sizeof(eightseaterArr) / sizeof(eightseaterArr[0]);

	cout << "\n\t\t+------------------------------------------------------------------------------------+" << endl;
	cout << "\n\t\t       Car Brand \t\t"<< "Transmission \t\t" << "Fuel Type\t" << "Status" << endl;
	cout << "\n\t\t+------------------------------------------------------------------------------------+" << endl;
			
	//switch case
    switch(cschoice){ //choices for cartypes
        
        
		case 1:
			cartype = "Compact Car";
			price = compactprice;
            for(int i; i < fourseater; i++){
                cout << "\n\t\t [" << i + 1 << "] - " << left << setw(12) << fourseaterArr[i] << "\t\t" << fourseat_transmission[i] << "\t\t" << fourseat_fuel [i] << "      \t" << fourseat_status[i] << endl;
            } 

			cout << "\n\t\t+------------------------------------------------------------------------------------+" << endl;
            cout << "\t\t\t\t\t  Enter your choice or [x] for exit: ";
                cin >> carchoice;
            
            system("CLS");
							
            //options for specific car choice
	        switch(carchoice) {
				
				case 1:
					carname = "Toyota Vios";
					year = "2022";
					color = "Yellow";
					transmission = "Automatic";
					platenum = "NDF 6287";	
					suitcasecap = "2";
					gastype = "petrol";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				case 2:
					carname = "Honda City";
					year = "2021";
					color = "Black";
					transmission = "Manual";
					platenum = "ZTM-4391";	
					suitcasecap = "2";
					gastype = "Petrol";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				case 3: 
					carname = "Hyundai Accent";
					year = "2020";
					color = "Red";
					transmission = "Automatic";
					platenum = "LQP-8573";	
					suitcasecap = "2";
					gastype = "Diesel";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				case 4:
					carname = "Suzuki Swift";
					year = "2023";
					color = "Blue";
					transmission = "Manual";
					platenum = "WJN-1439";	
					suitcasecap = "2";
					gastype = "Petrol";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				case 5: 
					carname = "Mazda 2";
					year = "2022";
					color = "White";
					transmission = "Automatic";
					platenum = "BKP-7865";	
					suitcasecap = "2";
					gastype = "Petrol";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				default:
						cout << "\t\t\t\t\t\t    Error Occured. " << endl;
		            	exit();
		            	break; 
					
				}
		            	 	

		            break; //case 1 of carchoice break
	
		case 2: 
		cartype = "Sports Utility Vehicle";
		price = suvprice;
			for(int i = 0; i < sixseater; i++){
                cout << "\n\t\t [" << i + 1 << "] - " << left << setw(12) << sixseaterArr[i] << "\t\t" << sixseat_transmission[i] << "\t\t" << sixseat_fuel [i] << "      \t" <<sixseat_status[i] << endl;
            } 
            
			cout << "\n\t\t+------------------------------------------------------------------------------------+" << endl;
            cout << "\t\t\t\t\t  Enter your choice or [x] for exit: ";
                cin >> carchoice;
            system("CLS");
			
			
			switch(carchoice) {
				
				case 1:
					carname = "Toyota Fortuner";
					year = "2023";
					color = "White";
					transmission = "Automatic";
					platenum = "DMS-4782";	
					suitcasecap = "4";
					gastype = "Diesel";
								
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
		
				case 2: 
				carname = "Ford Everest";
					year = "2021";
					color = "Grey";
					transmission = "Manual";
					platenum = "HFG-1258";	
					suitcasecap = "4";
					gastype = "Diesel";
								
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				case 3:
				carname = "Nissan Terra";
					year = "2023";
					color = "Red";
					transmission = "Automatic";
					platenum = "TXL-9821";	
					suitcasecap = "5";
					gastype = "Diesel";

					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				case 4: 
					carname = "Isuzu mu-X";
					year = "2022";
					color = "Blue";
					transmission = "Manual";
					platenum = "KPY-6538";	
					suitcasecap = "4";
					gastype = "Diesel";
				
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
					
				default:
					cout << "\t\t\t\t\t\t    Error Occured. " << endl;
		            	exit();
		            	break; 
					
				}
			
				break;			

			
		case 3: 
		cartype = "Van - 12 seater";
		price = vanprice;
			for(int i = 0; i < eightseater; i++){
                cout << "\n\t\t [" << i + 1 << "] - " << left << setw(12) << eightseaterArr[i] << "\t\t" << eightseat_transmission[i] << "\t\t" << eightseat_fuel [i] << "      \t" << eightseat_status[i] << endl;
            } 
            
            
			cout << "\n\t\t+------------------------------------------------------------------------------------+" << endl;
            cout << "\t\t\t\t\t  Enter your choice or [x] for exit: ";
                cin >> carchoice;
            system("CLS");
            

			switch(carchoice) {
	            	
	            	case 1: 
					carname = "Toyota HiAce";
					year = "2023";
					color = "White";
					transmission = "Automatic";
					platenum = "NXJ-5673";	
					suitcasecap = "7";
					gastype = "Diesel";

					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
		            	
		           
		            case 2:
					carname = "Hyundai Starex";
					year = "2023";
					color = "Black";
					transmission = "Automatic";
					platenum = "MGP-8542";	
					suitcasecap = "5";
					gastype = "Diesel";
				
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
		            
					case 3:	
					carname = "Ford Transit";
					year = "2023";
					color = "Black";
					transmission = "Manual";
					platenum = "TDX-2489";	
					suitcasecap = "5";
					gastype = "Diesel";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
		            	
		            case 4: 
					carname = "Toyota Grandia";
					year = "2023";
					color = "Silver";
					transmission = "Automatic";
					platenum = "FRY-7861";	
					suitcasecap = "6";
					gastype = "Diesel";
					
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;
					cout << "\t\t\t\t\t|\t   -Alt F4 Car Rentals-\t\t |" << endl; 			
					cout << "\t\t\t\t\t+----------------------------------------+" << endl;	
					cout << "\t\t\t\t\t  Car: \t\t\t" << carname << endl;									
					cout << "\t\t\t\t\t  Year: \t\t" << year << endl;
					cout << "\t\t\t\t\t  Color: \t\t" << color << endl;
					cout << "\t\t\t\t\t  Transmission: \t" << transmission << endl;
					cout << "\t\t\t\t\t  Plate Number: \t" << platenum << endl;
					cout << "\t\t\t\t\t  Suitcase Capacity: \t" << suitcasecap << endl;	
					cout << "\t\t\t\t\t  Gas Type: \t\t" << gastype << endl;
					cout << "\t\t\t\t\t  Price per day: \t" << price << endl;
					cout << "\n\t\t\t\t\t+----------------------------------------+" << endl;	
					break;
		            	
		            default:
		            	cout << "\t\t\t\t\t\t    Error Occured. " << endl;
		            	exit();
		            	break; 
						
						
		            break; //case 3 of carchoice break
		}
		
		default: 
		
				cout << "\t\t\t\t\t\t    Error Occurred." << endl;
				exit();
				break;
				
		
				
        	
    }
    
    //confirmation of choice
    					cout << endl;
    					cout << "\t\t\t\t\t   Confirm your choice (y/n): ";//for confirmation
		            	cin >> confirm;	            	
						cout << "\n\t\t\t\t\t+-----------------------------------+" << endl;
						
						
						while (confirm != 'y' && confirm == 'n') {
						system("CLS");
						listcars();
						
								} 
								} // function
       	
       	
int login(){ //user login information
       		cout << "\n\t\t\t\t\tEnter Name: ";
		getline(cin, name);
		cout << "\n\t\t\t\t\tEnter Email Address: ";
		getline(cin, email);
		cout << "\n\t\t\t\t\tEnter Mobile Number: ";
		getline(cin, mobileNumber);
		
		system("CLS");
		   }

int main() { //cutesy intro 
	
	system("Color 0e");
	system("cls");
	
	int buno = 177, bdos = 219;
	
	//title bar 
	
	//loading wordX	
	
	cout << "\t\t\t\t\t                 _____        "; 
	cout << "\n\t\t\t\t\t                /|_||_|`.__   ";
	cout << "\n\t\t\t\t\t               (   _    _ |)  ";
	cout << "\n\t\t\t\t\t    Loading...=`-(_)--(_)-'   ";
	cout << "\n\n\t\t\t\t\t    ";
	
	//loading bar part 1
	for(int i = 0; i < 25; i++)
		cout << (char)buno;
		
	//loading bar part 2
	cout << "\r";
	cout << "\t\t\t\t\t    ";
	for(int i = 0; i < 25; i++)
	{
			cout << (char)bdos;
			Sleep(25);
	}

	cout << "\n\t\t\t\t\t  " << (char)1 <<"!";
	system("Pause");


		login();


//first list of car types

    //first list
	string seatcountArr[] = {"Compact Car", "Sports Utility Vehicle (SUV)", "Van - 12 seater"};  //array for num of seats
	int seatcount = sizeof(seatcountArr) / sizeof(seatcountArr[0]); //for num of items for seatcount array
    for (int i = 0; i < seatcount; i++) {
        cout << "\t\t\t\t\t+--------------------------------------+" << endl;	
        cout << "\t\t\t\t\t [" << i + 1 << "] - " << seatcountArr[i] << endl;
    }
    		
    //user input choice for how many seats	
	cout << "\t\t\t\t\t+--------------------------------------+" << endl;	
    cout << "\n\n\t\t\t\t    Choose the type of car you would like to see: ";
    cin >> cschoice;
    
    
    cout << endl;

    system("CLS");

//call functions
    listcars();
	calculate();
	
    
    //choices
}
