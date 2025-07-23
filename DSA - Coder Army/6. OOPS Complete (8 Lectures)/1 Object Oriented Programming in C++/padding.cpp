#include<iostream>
using namespace std;

// Eg.1
class a
{
    char c;
    int b;
    char d;
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" "; //12 Output
}

// Eg.2
class a
{
    char c;
    char d;
    int b;
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" "; //8 Output
}

//Eg.3
class a
{
    char c;
    char d;
    int b;
    double e;
    // c d p p b b b b e e e e e e e e
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" "; //16 Output (2 Padding)
}

//Eg.4
class a
{
    char c;
    int b;
    char d;
    double e;
    // c p p p b b b b d p p p e e e e e e e e
    // p = padding
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" "; //24 Output
}