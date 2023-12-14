#include <iostream>
#include <iomanip>
#include <string>
#include "formulas.h"

using namespace std;

int main(){
	cout << "**********Calculator Program*********" << "\n\n";
	
	cout << "Choose a formula\n";
	cout << "1. Area of a circle\n";
	cout << "2. Area of a Rectangle\n";
	cout << "3. Area of a Sphere\n";
	cout << "4. Area of a Triangle\n";
	cout << "5. Area of a Square\n";
	cout << "6. Area of a Trapezium\n\n";
	
	int option;
	cout << "Option: ";
	cin >> option;
	
	

	if(option == 0)
		return 0;
	
	switch(option){
		case 1:
			system("clear");
			cout << "Area of circle\n\n";
			cout << "Enter the following...\n";
			float radius;
			cout << "Radius: ";
			cin >> radius;
			cout << "\nArea: " << formulas::areaOfCircle(radius) << " Square Units.\n\n\n";
			break;
		case 2:
			system("clear");
			cout << "Area of a Rectangle\n\n";
			cout << "Enter the following***\n";
			float len, wid;
			cout << "Length: ";
			cin >> len;
			cout << "width: ";
			cin >> wid;
			cout << "Area: " << formulas::areaOfRectangle(len, wid) <<" Square Units.\n\n";
			break;
		case 3:
			system("clear");
			cout << "Area of a Sphere\n\n";
			cout << "Enter the following***\n";
			float radiusSphere;
			cout << "Radius: ";
			cin >> radiusSphere;

			cout << "Area: " << formulas::areaOfSphere(radius) << " Square Units";
			break;
		case 4:
			system("clear");
			cout << "Area of a Triangle\n\n";
			cout << "Enter the following***\n";
			float base, height;
			cout << "Base: ";
			cin >> base;
			cout << "Height: ";
			cin >> height;
			cout << "Area: " << formulas::areaOfTriangle(base, height) << " square units";
			break;
		case 5:
			system("clear");
			cout << "Area of a Square\n\n";
			cout << "Enter the following****\n";
			float side;
			cout << "Side: ";
			cin >> side;
			cout << "Area: " << formulas::areaOfSquare(side) << " square units";
			break;
		case 6:
			system("clear");
			cout << "Area of a Trapezium\n\n";
			cout << "Enter the following values: \n";
			float heightOfTrapezium, valueOfa, valueOfb;
			cout << "Height: ";
			cin >> heightOfTrapezium;
			cout << "a: ";
			cin >> valueOfa;
			cout << "b: ";
			cin >> valueOfb;
			cout << "Area: " << formulas::areaOfTrapezium(heightOfTrapezium, valueOfa, valueOfb) << " square units\n\n";
			break;
	}
}
