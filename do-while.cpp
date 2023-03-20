// Practical 06 || SLO 12.2.4
#include <iostream>
using namespace std;

int main(){
	int num, limit, i, j=1, total=0;
	cout << "Multiples Finder\n";
	cout << "Enter a Number: ";
	cin >> num;
	cout << "Enter a Limit: ";
	cin >> limit;
	do {
		total += num;
		cout << 2 << " * " << j++ << " = " << total << endl;
	} while(total < limit);
}
