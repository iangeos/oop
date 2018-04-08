#include <iostream>
#include "Shape.h"
using namespace std; 

int main()
{
	Circle c1(4.0);
	cout << "Hello!" << endl;  
	cout << "Area of the shape is: " << c1.area() << "\n";
	cout << "Perimeter of the shape is: " << c1.perimeter() << endl;

        Rectangle r1(4.0,5.0);
        cout << "Hello again!" << endl;
        cout << "Area of the shape is: " << r1.area() << "\n";
        cout << "Perimeter of the shape is: " << r1.perimeter() << endl;

	int size = 3;
	Shape *sarray[size];
	sarray[0] = new Circle(4.0);
	sarray[1] = new Circle(5.0);
	sarray[2] = new Rectangle(4.0,5.0);
	
	for (int i=0; i<size; i++) {
 		cout << "Area of the shape is: " << sarray[i]->area() << endl;
		cout << "Perimeter of the shape is: " << sarray[i]->perimeter() << endl;
	}

	return 0;
}
