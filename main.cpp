#include <iostream>
#include "ListOfKeysAndValues.h"
#include <string>
using namespace std;

int main() {
	ListOfKeysAndValues<string, int> test;
		
	//test.addKeyValuePair("Sadeq", 7); //index 0
	//test.addKeyValuePair("Tim", 61); //index 1
	//test.addKeyValuePair("Bob", 14); //index 2

	int entry, choice;

	cout << "Number of Pairs: ";
	cin >> entry;

	for (int i = 0; i < entry; ++i) {
		int num;
		string name; 

		cout << "At index " << i << ", what is the name: ";
		cin.ignore();
		getline(cin, name);

		cout << "Number: ";
		cin >> num;

		test.addKeyValuePair(name, num);
	}
	cout << "Would you like to see the pairs: " << endl;
	cout << "1.) Yes" << endl;
	cout << "2.) No" << endl;
	cout << " ---------------------------------------- " << endl;
	cin >> choice;


	if (choice == 1) {
		for (int i = 0; i < entry; ++i) {
			auto set = test.getPair(i);
			cout << set.first << " is at index " << i << ", and holds the value " << set.second << endl;
		}
		cout << "Those are the Pairs!!! " << endl;
	}
	else {
		cout << "Have A Nice Day!!!" << endl;
	}

	return 0; 
}