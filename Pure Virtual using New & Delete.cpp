#include <iostream>
using namespace std;

// Abstract Base Class
class Shape
 {
public:
    // Pure virtual function
    virtual void draw() const = 0;
};

// Derived class 1
class Circle : public Shape 
{
public:
    // Concrete implementation of draw for Circle
    void draw() const override 
    {
        cout << "Drawing a circle." <<endl;
    }
};

// Derived class 2
class Square : public Shape
 {
public :
    // Concrete implementation of draw for Square
    void draw() const override
     {
        cout << "Drawing a square." <<endl;
    }
};

int main()
 {
    // Shape *shape = new Shape();
   // Error: Cannot instantiate abstract class

    Shape *circle = new Circle();
    Shape *square = new Square();
    
    circle->draw(); // Drawing a circle.
    square->draw(); // Drawing a square.

    delete circle;
    delete square;

    return 0;
}