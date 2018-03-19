#include <string>
#include <iostream>

using namespace std;

const int CURRENT_YEAR = 2018;

int main ()
{
    //declare variables
    string name;
    int yearOfBirth;
    double gpa;
    string desc;

    //read data from the console
    cout << "Name: ";
    getline(cin, name);
    cout << "Year of birth: ";
    cin >> yearOfBirth;
    cout << "GPA: ";
    cin >> gpa;
    cout << "Description: ";
    cin.ignore(); //ignore the leftover '\n' from the previous cin operation
    getline(cin, desc);

    //calculate your age
    int age = CURRENT_YEAR - yearOfBirth;

    //print data to the console
    cout << "\nName: " << name << '\n';
    cout << "Year of birth: " << yearOfBirth << '\n';
    cout << "GPA: " << gpa << '\n';
    cout << "Description: " << desc << '\n';
    cout << "Age: " << age << '\n';

	int x = 128; //2^7
    cout << "The double of 128 is " << (x << 1) << '\n';
    cout << "The half of 128 is " << (x >> 1) << '\n';
	
    return 0;
}
