// Practical 01 || SLO 12.1.2
#include <iostream>
#include <string>
using namespace std;

int main(){
	string email;
	cout << "Enter Your Email Address: ";
	cin >> email;
	if(email == "name@company.com"){
		cout << "Logging In..";
	} else {
		cout << "Email Dosen't Exists in Database.";
	}
}
