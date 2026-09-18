#include <iostream>
using namespace std;

class Square{
    int side;
    public:
    Square(int a){
        cout << "constructor called" << endl;
        cout << "a :" << a << endl;

    }
};

int main()
{
    Square s1(4);
    return 0;
}