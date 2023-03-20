// Practical 09 || SLO 13.3.3
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char fname[25], lname[25], space[5] = " ";
	cout << "[ Full Name Joiner ]\n";
	cout << "Enter your first name: ";
	cin >> fname;
	strcat(fname, space);
	cout << "Enter your last name: ";
	cin >> lname;
	strcat(fname, lname);
	cout << "Your Full Name is: " << fname;
}
