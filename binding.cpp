#include <iostream>
using namespace std;

class foo
{
public:
    void callPrint()
    {
        print();
    }
     void print()
    {
        cout<<"FOO"<<endl;
    }
};

class bar : public foo
{
public:
    virtual void print()
    {
        cout<<"BAR"<<endl;
    }
};
int main()
{
    foo f;
    bar b;
    f.callPrint();
    b.callPrint();
}
