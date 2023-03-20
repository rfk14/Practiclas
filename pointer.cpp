// Practical 15 || SLO 15.1.5
#include <iostream>
using namespace std;

int main(){
	int a = 5;
	cout << "Memory Address of a: " << &a << endl;
	cout << "Initial value of a: " << a << endl;
	int *ptr = &a;
	*ptr = 10;
	cout << "Final value of a: " << a << endl;
	cout << "Value of ptr: " << *ptr << endl;
	cout << "Memory Address of ptr: " << ptr << endl;
}
