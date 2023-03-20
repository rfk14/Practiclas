// Practical 05 || SLO 12.2.3
#include <iostream>
#include <string>
using namespace std;

int main(){
	string pass;
	cout << "Enter Your Password: ";
	cin >> pass;
	
	while(pass != "ahsan"){
		cout << "Password is Wrong. Try Again\n";
		cout << "Enter Your Password: ";
		cin >> pass;
	}
}
