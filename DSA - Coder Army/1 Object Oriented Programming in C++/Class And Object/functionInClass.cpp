#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age, roll_no;
    string grade;

    // Function Getter and Setter we can use
    public: 
    void setname(string s)
    {
        // Benefit of Function
        // We can write condition here to check name is valid or not
        name = s;
    }
    void setage(int a)
    {
        //Here condition like age must be b/w 0 and 100
        age = a;
    }
    void setroll_number(int r)
    {
        roll_no = r;
    }
    void setgrade(string g)
    {
        grade = g;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }

    int getroll_number()
    {
        return roll_no;
    }
    string get_grade(int pin)
    {
        if(pin==123)
        return grade;

        return " ";

    }

};
int main(){
    Student s1;
    s1.setname("Rohit");
    s1.setage(10);
    s1.setroll_number(21);
    s1.setgrade("A+");
    s1.getage();
    cout<<s1.getroll_number()<<endl;
    cout<<s1.get_grade(123)<<endl;
}