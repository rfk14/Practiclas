// Practical 09 || SLO 13.3.3
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char password[25];
	int length;
	cout << "[ Password Strength Checker ]\n";
	cout << "Enter your password: ";
	cin >> password;
	length = strlen(password);
	if(length <= 3){
		cout << "Password is very WEAK";
	} else if(length <= 6){
		cout << "Password is WEAK";
	} else if(length <= 12) {
		cout << "Password is STRONG";
	} else {
		cout << "Password is very STRONG";
	}
}
