// Practical 14 || SLO 14.1.8
#include <iostream>
using namespace std;
int i;

void average(int t){
	float nums[20], sum, avg;
	for(i = 0; i < t; ++i){
		cout << "Enter Number " << i + 1 << ": ";
		cin >> nums[i];
		sum += nums[i];
	}
	avg = sum / t;
	cout << "Average: " << avg;
}

int main(){
	int total;
	cout << "Enter The Total Numbers: ";
	cin >> total;
	average(total);
}
