//Static member function
#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;
    public:
    //They are attribute of classes or class member
    customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance +=balance;
    }
    static void accessStatic(){
        cout<<"Total Number of Customer "<<total_customer<<endl;
        cout<<"Total Balance: "<<total_balance<<endl;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }  
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            total_balance +=amount;
        }
    }
    void withdraw(int amount){
        if(amount<=balance&&amount>0){
            balance-=amount;
            total_balance -=amount;
        }

    }
    void display_total(){
        cout<<total_customer<<endl;
    }

};
int customer::total_balance=0;
int customer::total_customer=0;
int main()
{
    customer A1("Rohit", 1,1000);
    customer A2("Mohit", 2, 1800);
    customer A3("Mohan", 3, 2000);
    A1.deposit(800);
    A2.withdraw(500);
    customer::accessStatic();
    // customer::total_customer = 5;
}

//Hw - Learn about const keyword