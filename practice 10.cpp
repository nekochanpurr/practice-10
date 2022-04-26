
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//name, birth city, and birthdate assignment

// setting up definitions for input
const int CAP = 5;
 string name[CAP];
 string birthCity[CAP];
double birthYr[CAP];





int main()

{
	//asking for information to input

	cout << "Please give me the information of five family members,\n"
		"I will give you the information back.";

	cout << "\nPlease enter the name of five family members.\n ";
	for (int i = 0; i <= 4; i++)
		getline(cin, name[i]);


	cout << "\nPlease enter the birth city of five family members. \n";
	for (int i = 0; i <= 4; i++)
		getline(cin, birthCity[i]);

	cout << "\nPlease enter the birth year of five family members between 1900-2018.\n ";
	for (int i = 0; i <= 4; i++)
		cin >> birthYr[i];


//feeding information back out to the user

				for (int i = 0; i < CAP; i++)
				{
					cout << "Name: " << name[i] << endl;
					cout << "Birth City: " << birthCity[i] << endl;
					cout << "Birth Year: " << birthYr[i] << endl;
                 }



	return 0;
}

