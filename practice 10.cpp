

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
int sub;
int allInfo = 1;



int main()

{
	//asking for information to input
	allInfo++;
	cout << "Please give me the information of five family members,\n" 
		"I will give you the information back.";
	
		cout << "\nPlease enter the name of five family members.\n ";
		for (int i = 0; i <= 4; i++)
			getline(cin,name[0]);
	

			cout << "\nPlease enter the birth city of five family members. \n";
			for (int i = 0; i <= 4; i++)
			getline(cin, birthCity[0]);
			
			cout << "\nPlease enter the birth year of five family members between 1900-2018.\n ";
			for (int i = 0; i <= 4; i++)
				cin >> birthYr[0];

//feeding information back out to the user

				for (int sub = 0; sub <= allInfo; sub++)
				{
					cout << "Name: " << name[sub] << endl;
					cout << "Birth City: " << birthCity[sub] << endl;
					cout << "Birth Year: " << birthYr[sub] << endl;
                 }



	return 0;
}

