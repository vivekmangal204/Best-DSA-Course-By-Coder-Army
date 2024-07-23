#include<iostream>
using namespace std;

// Same Class All Access
class Human{
   private:
   int a;
   protected:
   int b;
   public:
   int c;

   void fun(){
    a = 10;
    b = 20;
    c = 30;
   }
};

int main()
{
    Human Rohit;
    Rohit.c = 10;
}