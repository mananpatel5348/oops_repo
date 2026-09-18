#include<iostream>
using namespace std;

// polymorphism means many forms. It is a feature of OOPs that allows us to perform a single action in different ways. There are two types of polymorphism in C++: compile-time polymorphism and run-time polymorphism. Compile-time polymorphism is achieved by function overloading and operator overloading, while run-time polymorphism is achieved by method overriding.
// create a class area and inside it a method called
// calculateArea which gets overloaded three times in one
// it takes one parameter, in second it takes two parameters and in third it takes three parameters , baesd on given parametes find area
class Maths {
    public:
    int add(int a, int b){
        cout << "function 1" << endl;
        return a + b;
    }

    int add(int a, int b, int c){
        cout << "function 2" << endl;
        return a + b + c;
    }
};

int main(){

    Maths m1;
    m1.add(5, 10);
    m1.add(5, 10, 15);

    return 0;

}