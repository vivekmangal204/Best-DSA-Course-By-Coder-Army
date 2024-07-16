#include<iostream>
using namespace std;

class Student{
    public: //Access Modifier -> By Default private
    string name;
    int age, roll_no;
    string grade;
};
int main(){
    Student s1;
    s1.name = "Rohit";
    s1.age = 10;
    s1.roll_no = 101;
    s1.grade = "A+";

    cout<<s1.age<<" ";

    Student s2;
    s2.name = "Mohit";
    s2.age = 20;
    s2.roll_no = 102;
    s2.grade = "A";

    cout<<s2.age<<" ";
}