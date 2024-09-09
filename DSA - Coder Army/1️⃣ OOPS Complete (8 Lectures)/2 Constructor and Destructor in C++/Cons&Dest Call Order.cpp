#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:
    Customer() // Default constructor
    {
        name = "4";
        cout<<"Constructor is "<<name;
    }
    Customer(string name)
    {
        this->name = name;
        cout<<"constructor is "<<name<<endl;
    }
    ~Customer()
    {
       cout<<"Destructor is"<<name<<endl;
    }
};

int main()
{
    Customer A1("1"),A2("2"),A3("3"); // 
    // Constructor is 1
    // Constructor is 2
    // Constructor is 3
    // Destructor is 3
    // Destructor is 2
    // Destructor is 1
    // "What is the Reason Behind the destructor reverse order" Hint : Dependency

    Customer *A4 = new Customer;
    delete A4; //Released A4
}