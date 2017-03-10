#include <iostream>

using namespace std;

class foo
{
private:
    int a;
    string b;
public:
    foo(foo &f);
    foo ()
    {
        a = 0;
    }
    void setData(int a, string b)
    {
        this->a = a;
        this->b = b;
    }
    void display();
};

foo::foo(foo &f)
    {
        a = f.a;
        b = f.b;
    }

void foo :: display()
{
    cout<<"Age: "<<a<<endl<<"Name: "<<b<<endl;
}
int main()
{
    foo A;
    A.setData(10, "pawan");     // A's attributes have 10 and pawan
    A.display();
    foo B(A);               //deep copy;    B's attributes have 10 and pawan
    B.display();
    foo *C = &A;               //shallow copy
    C->setData(20, "rohit");        // C's attributes have 20 and Rohit; A and C point to same object; therefore C changed the A's attributes also
    C->display();
    A.display();
    B.display();
}
