// Practical 12 || SLO 14.1.7
#include <iostream>
using namespace std;

float volume(float a){
	return a * a * a;
}

int main(){
	float input;
	cout << "[ Volume of Cube ]" << endl;
	cout << "Enter the Value of Edge(a): ";
	cin >> input;
	cout << "Volume: " << volume(input);
}
