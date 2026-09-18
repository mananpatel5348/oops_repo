#include<iostream>
using namespace std;

class A {
    public:
    int a,b,c;

    A(){
        cout << "constructor";
    }
    A(int a, int b){
        this->a = a;
        this->b = b;
        sum(a,b);
    }
    A(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
        sum(a,b,c);
    }

    void sum (int a, int b){
        cout << a+b;
    }

    void sum (int a, int b, int c){
        cout << a+b+c;
    }
    
};

int main(){
    A a1;
    cout << endl;
    A a2(10,20);
    cout << endl;
    A a3(10,20,30);
    cout << endl;

    return 0;
}