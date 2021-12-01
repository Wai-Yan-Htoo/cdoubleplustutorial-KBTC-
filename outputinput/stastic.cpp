#include <iostream>
using namespace std;
class Circle
{
private:
double radius; // Radius of a circle
public:
int count=0;

Circle(){
	cout<<"default constructor";
}

// Constructor definition
Circle(double r = 1.0)
{
radius = r;
// Increase every time object is created
count++;
}
double getArea()
{
return 3.14 * radius * radius;
}
};
// Initialize static member of class Circle

int main()
{
 //Circle c1(3.3); // Declare object c1
 //Circle c2(4.5); // Declare object c2
 Circle cc;
 // Print total number of objects.
 cout << "Total objects: " << cc.count << endl;
}
