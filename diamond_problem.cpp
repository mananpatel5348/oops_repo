#include<iostream>
using namespace std;

class X{
    public:
    void display(){
        int a;
    }
};

class A :  virtual public X{
    public:
    void display(){
        cout << "class A ka display" << endl;
    }
};

class B :  virtual public X{
    public:
    void display(){
        cout << "class B ka display" << endl;
    }
};

class C : public A, public B{
    public: 
    void myfun(){
        this -> a = 20;
        cout << a;
    }
};

int main(){
    
    C c1;
    c1.A::display(); // calling display of class A

    c1.B::display(); // calling display of class B

    return 0;
}
