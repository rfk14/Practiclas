// Practical 11 || SLO 14.1.6
#include <iostream>
using namespace std;

float area(float base, float height){
	return base * height;
}

int main(){
	float b, h;
	cout << "[ Area of Parallelogram ]" << endl;
	cout << "Enter Base: ";
	cin >> b;
	cout << "Enter Height: ";
	cin >> h;
	cout << "Area: " << area(b, h);
}
