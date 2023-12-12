#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

namespace formulas{
	float phi = 3.14;
	
	float areaOfRectangle( float length, float width){
		return length * width;
	}
	float areaOfCircle(float radius){
		return phi * (radius*radius);
	}
	float areaOfSquare(float side){
		return (side * side);
	}
	float areaOfSphere(float radius){
		return 4*phi*(radius * radius);
	}
	float areaOfTriangle( float base, float height){
		return 0.5 * (base * height);
	}
}

using namespace std;

int main(){
	cout << "**********Calculator Program*********" << "\n\n";
	
	cout << "Choose a formula\n";
	cout << "1. Area of a circle\n";
	cout << "2. Area of a Rectangle\n";
	cout << "3. Area of a Sphere\n";
	cout << "4. Area of a Triangle\n";
	cout << "5. Area of a Square\n\n";
	
	int option;
	cout << "Option: ";
	cin >> option;
	
	if(option == 0)
		return 0;
	
	switch(option){
		case 1:
			system("cls");
			cout << "Enter the following...\n\n";
			float radius;
			cout << "Radius: ";
			cin >> radius;
			cout << "\nArea: " << formulas::areaOfCircle(radius) << " Square Units.\n\n\n";
			break;
		case 2:
			system("cls");
			cout << "Enter the following***\n\n";
			float len, wid;
			cout << "Length: ";
			cin >> len;
			cout << "width: ";
			cin >> wid;
			cout << "Area: " << formulas::areaOfRectangle(len, wid) <<" Square Units.\n\n";
			break;
	}
}
