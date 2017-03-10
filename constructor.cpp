#include <iostream>
using namespace std;

class foo
{
private:
    string a;
public:
    void printName(string a);
    void printName();
    foo(string name);
    foo (foo &b);
};

foo :: foo(string name)
{
    a = name;
}
foo :: foo(foo &b)
{
    a = b.a;
}
void foo :: printName()
{
    cout<<a;
}
void foo :: printName(string a)
{
    cout<<a;
}

int main()
{
    foo f("pawan");
    foo a(f);
    f.printName("pawt");
    a.printName();
}
