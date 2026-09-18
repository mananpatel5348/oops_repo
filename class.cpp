// class :- class is a blue print of obj.
// obj :- obj is an instance of a class.  ex :- if you want to store the info of students then you would create onr class which contain student name , roll no, attendance,etc and then this same blue print can be applied to every obj of student that we create  
//diffrence between structure and class :-
// structure can not have a function inside it 
// also class has many more functanality like inheritance and hiding the data 


#include<iostream>
using namespace std;

// c does not give compiler level error for modifing sensitive variables.

// in c++ you can make sensitive variable private which means they can not be modified out side the class
// to insilise or modify that variable you would have to create getter and setter function
// getter function will reaturn you the value of that private variable 
// and setter function will set that variables value for you

class Bank{
    //public: // access modifier 
    int balance;
    public:
    void set(int a){
        if(a < 0){
            cout << "balance can not be an mines";
            return;
        }
        balance = a;
    }
    void printer(){
        cout << balance ;
    }
};
int main()
{
    Bank a1; // declaration of obj 
    a1.set(-10);
    a1.printer();
    return 0;
}