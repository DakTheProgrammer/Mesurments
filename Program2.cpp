// Dakota Wilson
// Computer Science I - Dr.Halverson
// Program 2 - Measurments
// 10/4/2018
// This program is used to take an input from the keyboard as a value given in
// feet. The program will then run in a loop for 10 sets of the data given and
// convert the value in feet to yards, inches, centimeters and meters. It will 
// then give these outputs with 5 decimal points to ensure precision on the 
// outputs given. It is also aligned on the right side to help the reader 
// understand the outputs. It is also all aligned along the decimal point so 
// that it looks nice to the user reading the outputs. So, all in all the 
// program is used as a conversion system for feet to other measurements. 

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	int count;
	double Feet, Yards, Inches, CenMeters, Meters; // sets values to real 
	                                               // numbers

	ofstream outfile;
	outfile.open("Program2.txt");

	outfile << "Student: Dakota Wilson\n"; // prints name at begining
	outfile << fixed << setprecision(5);

	count = 1;
	while (count <= 10) // loops 10 times
	{
		cout << "Enter Feet Amount: ";
		
		cin >> Feet; // input value in feet
		outfile << "\n";

		Yards = (Feet / 3);
		Inches = (Feet * 12); // calculates inches from feet
		CenMeters = (Inches * 2.54);
		Meters = (CenMeters / 100); // calculates meters from centimeters

		outfile << right << setw(14) << Feet << " feet equals" << "\n";
		outfile << right << setw(14) << Yards << " Yards" << "\n";
		outfile << right << setw(14) << Inches 
			<< " Inches" << "\n"; // outputs inches value
		outfile << right << setw(14) << CenMeters << " Centimeters" << "\n";
		outfile << right << setw(14) << Meters << " Meters" << "\n";

		outfile << "\n"; // creates a space for easy read

		count = count + 1;
	}// ends loop reads next code
	outfile.close();
	return 0;
}