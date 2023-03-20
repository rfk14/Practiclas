// Practical 04 || SLO 12.2.2
#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	string name;
	cout << "Enter Your Name: ";
	cin >> name;
	cout << "How Many Times Do You Want To Print Your Name: ";
	cin >> num;
	for(int i = 1; i <= num; ++i){
		cout << i << ". " << name << endl;
	}
}
