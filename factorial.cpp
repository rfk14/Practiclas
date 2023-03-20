// Practical 13 || SLO 14.1.9
#include <iostream>
using namespace std;
int num, fact = 1;

int factorial(int num){
	for (int i = 1;num > i; --num){
		fact *= num;
	}
	return fact;
}

int main(){
	int input;
	cout << "Enter a Number: ";
	cin >> input;
	cout << "Factorial: " << factorial(input);
}
