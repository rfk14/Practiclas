// Practical 10 || SLO 14.1.5
#include <iostream>
using namespace std;

int sum(int num1, int num2){
	return num1 + num2;
}

int diff(int num1, int num2){
	return num1 - num2;
}

float prod(float num1, float num2){
	return num1 * num2;
}

float divi(float num1, float num2){
	return num1 / num2;
}

int main(){
	int n1, n2;
	cout << "Enter Two Numbers: " << endl;
	cin >> n1 >> n2;
	cout << endl;
	cout << n1 << " + " << n2 << " = " << sum(n1, n2)<<endl;
	cout << n1 << " - " << n2 << " = " << diff(n1,n2)<<endl;
	cout << n1 << " x " << n2 << " = " << prod(n1,n2)<<endl;
	cout << n1 << " / " << n2 << " = " << divi(n1,n2)<<endl;
}
