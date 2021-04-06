//CSCI 110 Homework Control Statements
//Gwenn Reynoso
//0521148
//Programming c)

#include <iostream>
using namespace std;

int main() {

	double radius{ 0 }, diameter, circumference, pi, area;
	pi = 3.14159;

	cout << "Enter radius: ";
	cin >> radius;

    diameter = (radius * 2);
	area = pi * (radius * radius);
	circumference = 2 * pi * radius;

	cout << "Diameter equals: " << diameter << endl
		<< "Circumference equals: " << circumference << endl
		<< "Area equals: " << area << endl;


	system("pause");
	return 0;
}