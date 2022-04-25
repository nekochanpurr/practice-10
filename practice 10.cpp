#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//name, birth city, and birthdate assignment

// setting up definitions for input
const int CAP = 5;
const string name[CAP];
const string birthCity[CAP];
int birthYr[CAP];
int sub;
int allInfo = 1;



int main()

{
	//asking for information to input
	cout << "Please give me the information of five family memebers, I will give you the information back.";
	
		cout << "Please enter the name of five family members. ";
		cin >> name;
	

			cout << "Please enter the birth city of five family members. ";
			cin >> birthCity;

			cout << "Please enter the birth year of five family members between 1900-2018. ";
				cin >> birthYr;

//feeding information back out to the user

				for (int sub = 0; sub <= allInfo; sub++)
				{
					cout << "Name: " << name[sub] << endl;
					cout << "Birth City: " << birthCity[sub] << endl;
					cout << "Birth Year: " << birthYr[sub] << endl;
}



	return 0;
}

