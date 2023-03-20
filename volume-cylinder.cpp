// Practical 12 || SLO 14.1.7
#include <iostream>
using namespace std;

float volume(float radius, float height){
	float pie = 3.1415;
	return pie * radius * radius * height;
}

int main(){
	float r, h;
	cout << "[ Volume of Cylinder]" << endl;
	cout << "Enter Radius: ";
	cin >> r;
	cout << "Enter Height: ";
	cin >> h;
	cout << "Volume: " << volume(r, h);
}
