/*
Author: Felipe D Quinones | 106148
History:
12/ 09/ 2017 - File created.[FQS]
*/

#include <iostream>
using namespace std;

class SquareShape {
	float side;

public:
	void setSide(float);
	float fArea();
	float fPerimeter();

};

int main() {
	SquareShape box; //box es definido como un objeto del class SquareShape
	float size;

	cout << "Enter the length of the side of the square" << endl;
	cin >> size;

	box.setSide(size);

	cout << "Area of the square is " << box.fArea() << endl;
	cout << "Perimeter of the square is " << box.fPerimeter() << endl;

	system("pause");
	return 0;
}

void SquareShape::setSide(float length)
{
	side = length;
}

float SquareShape::fArea()
{
	return side * side;
}

float SquareShape::fPerimeter()
{
	return 4 * side;
}

/*
TEST CODE RESULTS:
Enter the length of the side of the square
5
Area of the square is 25
Perimeter of the square is 20
Press any key to continue . . .
*/