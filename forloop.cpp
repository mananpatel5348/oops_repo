#include <iostream>
using namespace std;

int main()
{
    char name[50];
    
    cout << "Enter your name :-";
    cin >> name;
    
    for ( int i = 0 ; i < 5; i++)
    {
        
        cout << "your name is " << name << "!";
    }
    

    return 0;
}