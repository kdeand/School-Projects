#include <iostream>
#include <string>
using namespace std;

// Node structure for the linked list
struct Node {
    string itemName;
    float price;
    Node* next;
};

Node* head = NULL;

void addItem(string name, float price);
void deleteItem(string name);
void display();

int main() {
    int choice;
    string name;
    float price;

    do {
    	
    	string menuarr[4] = {"Add Item", "Delete Item", "Display Items", "Exit"};
    
	cout << "\n=============== MENU ===============\n";	
    	for (int i = 0; i < 4; i++) {
    		cout << "[" << i + 1 << "]: " << menuarr[i] << endl;
		}
     
     	cout << "Enter choice: "; cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter item name: ";
                getline(cin, name);
                cout << "Enter item price: ";
                cin >> price;
                cin.ignore(); 
                addItem(name, price);
                break;

            case 2:

                deleteItem(name);
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    Node* current = head;
    while (current != NULL) {
        Node* nextNode = current -> next;
        delete current;
        current = nextNode;
    }

    return 0;
}

void display() {
    if (head == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "\nItems in the list:\n\n";
    while (temp != NULL) {
        cout << "Item: " << temp -> itemName << "\t\tPrice: PHP" << temp -> price << endl;
        temp = temp -> next;
    }
}


void addItem(string name, float price) {
    Node* newNode = new Node;
    newNode -> itemName = name;
    newNode -> price = price;
    newNode -> next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp -> next != NULL) {
            temp = temp -> next;
        }
        temp->next = newNode;
    }

    cout << "Item added successfully." << endl;
}

void deleteItem(string name) {
	cout << "Enter item name to delete: ";
    getline(cin, name);
    if (head == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    if (head -> itemName == name) {
      	  Node* temp = head;
        head = head -> next;
        delete temp;
        cout << "Item deleted successfully.\n";
        return;
    }

    Node* prev = head;
    Node* current = head->next;

    while (current != NULL) {
        if (current -> itemName == name) {
            prev -> next = current -> next;
            delete current;
            cout << "Item deleted successfully.\n";
            return;
        }
        prev = current;
        current = current -> next;
    }

    cout << "Item not found." << endl;
}



