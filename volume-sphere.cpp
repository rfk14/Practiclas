// Practical 12 || SLO 14.1.7
#include <iostream>
using namespace std;

float volume(float radius){
	float pie = 3.1415;
	return 1.333 * pie * radius * radius * radius;
}

int main(){
	float r;
	cout << "[ Volume of Sphere ]" << endl;
	cout << "Enter Radius: ";
	cin >> r;
	cout << "Volume: " << volume(r);
}
