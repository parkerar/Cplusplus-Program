// Arren Parker 4/1/23

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string cityName;
int fahrenheit, celsious;

int main() {

	ifstream myfile("FahrenheitTemperature.txt");

	ofstream outfile;

	outfile.open("CelsiousTemperature.txt");

	if (!myfile) {
		cout << "Error" << endl;
	}
	else {
		while (myfile >> cityName >> fahrenheit) {
			celsious = (fahrenheit - 32) * ((double)5 / (double)9);
			outfile << cityName << " " << celsious << endl;
		}
	}

	myfile.close();
	outfile.close();

	return 0;
}

// cited sources - W3schools.com & geeksforgeeks.org & "C++ Tutorial: How to Write to Text Files" - Professor Hank Stalica(youtube channel)
