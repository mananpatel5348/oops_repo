// create a class area and inside it a method called
// calculateArea which gets overloaded three times in one
// it takes one parameter, in second it takes two parameters and in third it takes three parameters , baesd on given parametes find area

#include <iostream>
using namespace std;

class Area {   
    public:
    // method to calculate area of square
    int calculateArea(int side){
        cout << "function 1 called" << endl;
        cout << "Area of square: " << side * side << endl;
        return side * side;
    }

    // method to calculate area of rectangle
    int calculateArea(int length, int breadth){
        cout << "function 2 called" << endl;
        cout << "Area of rectangle: " << length * breadth << endl;
        return length * breadth;
    }

    // method to calculate area of cuboid
    int calculateArea(int length, int breadth, int height){
        cout << "function 3 called" << endl;
        cout << "Area of cuboid: " << 2 * (length * breadth + breadth * height + height * length) << endl;
        return 2 * (length * breadth + breadth * height + height * length);
    }
};

int main() {
    Area area;

    // calculate area of square
    area.calculateArea(5);

    // calculate area of rectangle
    area.calculateArea(5, 10);

    // calculate area of cuboid
    area.calculateArea(5, 10, 15);

    // calculate area of square with different value
    area.calculateArea(7);

    area.calculateArea(3, 4);

    return 0;
}