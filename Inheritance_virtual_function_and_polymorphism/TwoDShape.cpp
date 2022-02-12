#include <iostream>
#include <cstring>
using namespace std;

class TwoDShape {
    // These are private.

    double width;
    double heigth;

    // Add name field.
    char name[20];
    public:
        
        // Default constructor.
        TwoDShape(){
            width = heigth = 0;
            strcpy(name, "Unknown");
        }

        // Constructor for two shapes.
        TwoDShape(double w, double h, char *n){
            width = w;
            heigth = h;
            strcpy(name, n);
        }

        // Constructor for objects of equal heigth and width.
        TwoDShape(double w, char *n){
            width = heigth = w;
            strcpy(name, n);
        }

        void showDim(){
            cout << "Width and Heigth are ";
            cout << width << " and " << heigth;
        }

        // accessor functions.
        double getWidth() {return width;}
        double getHeigth() {return heigth;}
        double setWidth(double w) {width = w;}
        double setHeigth(double h) {heigth = h;}
        char *getname() {return name;}

        // area pure virtual function.
        virtual double area() = 0;
};

class Triangle: public TwoDShape {
    char style[20]; // private.

    public:

        // A default constructor.
        Triangle() {
            strcpy(style, "Unknown");
        }

        // Constructor with three parameters.
        Triangle(char *str, double w, double h) : TwoDShape(w, h, "tringanle") {
            strcpy(style, str);
        }

        // Construct an isosceles triangle.
        Triangle(double w) : TwoDShape(w, "triangle") {
            strcpy(style, "isosceles");
        }

        // Ovaerride area function.
        double area() {
            return getWidth() * getHeigth() / 2;
        }

        // Show style
        void showStyle() {
            cout << "Triangle is " << style << ".\n";
        }
};

class Rectangle: public TwoDShape {
    public:


        // Default constructor.
        Rectangle() {}

        // Constructor for rectangle.
        Rectangle(double w, double h) : TwoDShape(w, h, "Rectangle") {}

        // Constructor for square.
        Rectangle(double w) : TwoDShape(w, "rectangle") {}

        bool isSquare() {
            if (getWidth() == getHeigth()) return true;
            return false;
        }

        // Override area.
        double area() {
            return getWidth() * getHeigth();
        }
};


int main() {
    // Declare an array of pointers for TwoDShape
    TwoDShape *shape[4];

    shape[0] = &Triangle("right", 8.0, 9.0);
    shape[2] = &Rectangle(10);
    shape[1] = &Rectangle(10, 4);
    shape[3] = &Triangle(7.0);

    for (int i=0; i < 4; i++){
        cout << "object is " << shape[i]->getname() << ".\n";

        cout << "Area is " << shape[i]->area() << ".\n";

        cout << "\n";
    }

    return 0;
}