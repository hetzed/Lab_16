#include <iostream>

using namespace std;

//_________________________________________________________________________
// This program declares a class for a circle shape that will have 
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles 
// initialized  at declaration or set by a function.

//class declaration section   (header file)
class CircleShape
{
private: 
   float  radius;
   int    center_x;
   int    center_y;

public:
   CircleShape();               // Default constructor
   CircleShape(float r);       // Constructor

   void setCenter(int x, int y);
   double findArea();   
   double findCircumference(); 
   void printCircleStats(); // This outputs the radius and center of the circle. 
};      


const double PI = 3.14;

//Client section   

int main()
{
   CircleShape sphere(8);
   sphere.setCenter(9,10);
   sphere.printCircleStats();
	
   cout << "The area of the circle is " << sphere.findArea() << endl;
   cout << "The circumference of the circle is "
	    << sphere.findCircumference() << endl;

   system("pause");
   return 0;
}

//___________________________________________________________________________
//Implementation section     Member function implementation

CircleShape::CircleShape()
{
   radius = 1.0;
   setCenter(0, 0);
}

// Fill in the code to implement the non-default constructor
CircleShape::CircleShape(float r)
{
   radius = r;
   setCenter(0, 0);
}


// Fill in the code to implement the findArea member function
double CircleShape::findArea()
{
	return PI * radius * radius;
}

// Fill in the code to implement the findCircumference member function
double CircleShape::findCircumference()
{
	return PI * radius * 2;
}



// This procedure prints out the radius and center coordinates of the circle
// object that calls it.
void CircleShape::printCircleStats()
{
   cout << "The radius of the circle is " << radius << endl;
   cout << "The center of the circle is (" << center_x 
        << "," << center_y << ")" << endl;
}

// This procedure will take the coordinates of the center of the circle from 
// the user and place them in the appropriate member data.
void CircleShape::setCenter(int x, int y)
{
   center_x = x;
   center_y = y;
} 
