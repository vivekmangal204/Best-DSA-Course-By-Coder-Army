#include<iostream>
using namespace std;

class a
{
    int b;
    char c;
    // Size = 8 But expected 5 This is because of the concept Padding
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" "; //if Class Empty Size 1 Byte (H.W. Why Empty Class size have 1 byte)
}