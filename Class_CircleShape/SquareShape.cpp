/*
Author: Felipe D Quinones | 106148
History:
12/ 02 / 2017 - File created.[FQS]
*/

#include <iostream>
using namespace std;

class SquareShape {
	float side;

public:
	void setSide(float);
	float findArea();
	float findPerimeter();

};

int main{
	SquareShape box; //box es definido como un objeto del class SquareShape
	float size;

	cout << "Enter the length of the side of the square" << endl;
	cin >> size;

	box.setSide(size);

	cout << "Area of the square is " << box.findArea() << endl;

	cout << "Perimeter of the square is " << box.findPerimeter() << endl;

	return 0;

}

