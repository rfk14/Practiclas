// Practical 18 || SLO 16.1.6
#include <iostream>
using namespace std;

class School {
	private:
	int code = 3456;
	
	public:
	string name;
	int classs;
	char section;
	string check(int c){
		if (c == code){
			return "Verified";
		} else {
			return "Not Verified";
		}
	}
};

int main(){
	School student1;
	School student2;
	
	student1.name = "Ahsan";
	student1.classs = 12;
	student1.section = 'A';
	
	student2.name = "Nadir";
	student2.classs = 11;
	student2.section = 'B';
	
	cout << "Student 1:" << endl;
	cout << "Name: " << student1.name << endl;
	cout << "Class: " << student1.classs << endl;
	cout << "Section: " << student1.section << endl;
	cout << "Code Check: " << student1.check(3456);
	
	cout << endl << endl << "Student 2:" << endl;
	cout << "Name: " << student2.name << endl;
	cout << "Class: " << student2.classs << endl;
	cout << "Section: " << student2.section << endl;
	cout << "Code Check: " << student2.check(3476);
}
