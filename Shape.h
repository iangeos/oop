const double PI = 3.14159;

// virtual function: can be overriden in child classes

// Interface: contains only virtual functions. Only definition, not implementation

// Abstract: contains at least 1 virtual function. It can be instantiated.

// A class can inherit only 1 abstract but >1 interfaces. It can be instantiated. Definition ends with ';'

// Inheritance: single colon ':'

class Shape {  
public:
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double R);
	virtual double area() const;
	virtual double perimeter() const;
};

class Rectangle : public Shape {
private:
	double rl, rw;
public:
	Rectangle(double L, double W);
	virtual double area() const;
	virtual double perimeter() const;
};

// class Square
