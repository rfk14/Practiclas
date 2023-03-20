// Practical 16 || SLO 15.1.6
#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout << "Enter Two Numbers: " << endl;
	cin >> num1 >> num2;
	cout << "Sum of num1 & num2: " << num1 + num2 << endl;
	int *ptr1 = &num1, *ptr2 = &num2;
	cout << endl << "Enter Two Different Numbers: " << endl;
	cin >> *ptr1 >> *ptr2;
	cout << "Sum of ptr1 & ptr2: " << *ptr1 + *ptr2 << endl;
	cout << "Sum of num1 & num2: " << num1 + num2;
}
