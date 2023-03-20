// Practical 11 || SLO 14.1.6
#include <iostream>
using namespace std;

float areaTriangle(float base, float height){
	return 0.5 * base * height;
}

int main(){
	float b, h;
	cout << "[ Area of Triangle ]" << endl;
	cout << "Enter Base: ";
	cin >> b;
	cout << "Enter Height: ";
	cin >> h;
	cout << "Area: " << areaTriangle(b, h);
}
