// Practical 11 || SLO 14.1.6
#include <iostream>
using namespace std;

float areaCircle(float r){
	float pie = 3.1415;
	return pie * r * r;
}

int main(){
	float rad;
	cout << "[ Area of Circle ]" << endl;
	cout << "Enter The Radius: ";
	cin >> rad;
	cout << "Area: " << areaCircle(rad);
}
