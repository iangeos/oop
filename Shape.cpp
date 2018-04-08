#include "Shape.h"
#include <iostream>

// [returned type] [class name] :: [class function] 

Circle::Circle(double R)
{
	this->radius = R;
}

double Circle::area() const
{
	double area;
	area=PI*(this->radius)*(this->radius);
	return area;
}

double Circle::perimeter() const
{
	double p; 
	p = 2*PI*(this->radius);
	return p;
}

Rectangle::Rectangle(double L, double W)
{
	this->rl = L;
	this->rw = W;
}

double Rectangle::area() const
{
        double area;
        area=(this->rl)*(this->rw);
        return area;
}

double Rectangle::perimeter() const
{
        double p;
        p = 2*((this->rl)+(this->rw));
        return p;
}

 




