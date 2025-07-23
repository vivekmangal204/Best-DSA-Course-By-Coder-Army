#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:
    Customer()
    {
        name = "Rohit";
        data = new int;
        *data = 10;
        cout<<"Constructor is called\n";
    }
    // Destructor
    ~Customer() // Last Called
    {
        delete data;
        cout<<"Destructor is called\n";
    }
};

int main()
{
    Customer A1;
}