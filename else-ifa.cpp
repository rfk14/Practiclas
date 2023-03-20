// Practical 01 || SLO 12.1.2
#include <iostream>
using namespace std;

int main(){
	int g;
	cout << "Enter Your Percentage: ";
	cin >> g;
	if(g <= 100 && g >= 80){
		cout << "Congratulations You Got A+ Grade.";
	} else if(g < 80 && g >=70){
		cout << "Good You Got A Grade.";
	} else if(g < 70 && g >= 60){
		cout << "You Passed With B Grade.";
	} else if(g < 60 && g >= 50){
		cout << "C Grade..Need Improvement";
	} else if(g < 50 && g >= 40){
		cout << "D Grade..Disappointing";
	} else{
		cout << "You Are Failed..Improve Next Time";
	}
}
