//Static member function
#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number, balance;
    public:
    //They are attribute of classes or class member
    customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;

    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Invalid Amount"<<endl;
        }
    }
    void withdraw(int amount){
        if(amount<=balance&&amount>0){
            balance-=amount;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }

    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

};
int main()
{
    customer A1("Rohit", 1,1000);
    customer A2("Mohit", 2, 1800);
    customer A3("Mohan", 3, 2000);
    A1.deposit(10);
    A1.withdraw(510);
    A1.display();
}
