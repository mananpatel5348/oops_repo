#include<iostream>
using namespace std;

class Account{
    protected:
    int balance;
    int accountNumber;
};

class Savingaccount : public Account{
    public :
    int savingpercentage = 5;

    void printBalance(){
        cout << this -> balance << endl;
    }
};

int main(){
    Savingaccount s1;
    s1.printBalance();
    Savingaccount s2;
    s2.printBalance();
    return 0;
}

