
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

int allInfo = 1;



int main()

{
	//asking for information to input
	allInfo++;
	cout << "Please give me the information of five family members,\n" 
		"I will give you the information back.";
	
		cout << "\nPlease enter the name of five family members.\n ";
		for (int i = 0; i <= 4; i++)
			getline(cin,name[0,1,2,3,4]);
	

			cout << "\nPlease enter the birth city of five family members. \n";
			for (int i = 0; i <= 4; i++)
			getline(cin, birthCity[0,1,2,3,4]);
			
			cout << "\nPlease enter the birth year of five family members between 1900-2018.\n ";
			for (int i = 0; i <= 4; i++)
				cin >> birthYr[0,1,2,3,4];

//feeding information back out to the user

				for (int i = 0; i <= allInfo; i++)
				{
					cout << "Name: " << name[0,1,2,3,4] << endl;
					cout << "Birth City: " << birthCity[0,1,2,3,4] << endl;
					cout << "Birth Year: " << birthYr[0,1,2,3,4] << endl;
                 }



	return 0;
}

