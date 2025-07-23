#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    public:
    //Default Constructor
    Customer()
    {
        // cout<<"Hello Constructor\n";
        name = "Rohit";
        account_number = 5;
        balance = 100;
    }
    // Parameterized Constructor
    // Customer(string name, int account_number, int balance)
    // {
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }
    // Constructor Overloading
    Customer(string a, int b)
    {
        name = a;
        account_number = b;
    }

    // Inline Constructor
    inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c){
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
    //Copy Constructor
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    Customer A2("Rohit", 123, 10000);
    Customer A3("Mohit", 25);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();  
    // Value assign with assignment operator
    Customer A5;
    A5 = A3;
    A5.display();
}