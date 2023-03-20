// Practical 17 || SLO 16.1.2
#include <iostream>
#include <string>
using namespace std;

class Company {
	public:
	string name;
	int salary;
	int exp;
	
	void cnicCheck(int cnic){
		if(cnic == 71401){
			cout << "Verified";
		} else {
			cout << "Not Varified";
		}
	}
};

int main(){
	Company employee1;
	Company employee2;
	
	employee1.name = "Ahsan";
	employee1.salary = 5000;
	employee1.exp = 10;
	
	employee2.name = "Nadir";
	employee2.salary = 1000;
	employee2.exp = 5;
	
	cout << "Employee 1:" << endl;
	cout << "Name: " << employee1.name << endl;
	cout << "Salary: " << employee1.salary << "$\n";
	cout << "Experience: " << employee1.exp << "Years\n";
	cout << "CNIC Check: ";
	employee1.cnicCheck(71401);
	
	cout << endl << endl << "Employee 2:" << endl;
	cout << "Name: " << employee2.name << endl;
	cout << "Salary: " << employee2.salary << "$\n";
	cout << "Experience: " << employee2.exp << "Years\n";
	cout << "CNIC Check: ";
	employee2.cnicCheck(72401);
}
