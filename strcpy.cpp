// Practical 09 || SLO 13.3.3
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char pass[25], backup[25];
	cout << "[ Password Backup ]\n";
	cout << "Enter your password: ";
	cin >> pass;
	strcpy(backup, pass);
	cout << "Your password is successfully stored in backup.";
}
