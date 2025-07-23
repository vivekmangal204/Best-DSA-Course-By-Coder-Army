#include<iostream>
using namespace std;

class Human{
    string Religion, color;
    public:
    string name;
    int age,weight;
};
class student: protected Human{
    private:
    int roll_number, fees;
    public:
    student(string name, int age, int weight, int roll_number, int fees)
    {
        this-> name = name;
        this-> age  = age;
        this-> weight = weight;
        this-> roll_number = roll_number;
        this->fees = fees;
    }
    void display()
    {
        cout<<name<<" age is "<<age<<" weight is "<<weight<<" Roll_No. is "<<roll_number<<" and fees is "<<fees;
    }

};

class Teacher : public Human{
    int salary,id;
};

int main()
{
    student A("vivek", 12, 400, 23, 200);
    A.display();
    Teacher B;
    B.name = "Mohit";
}