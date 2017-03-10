#include <iostream>
using namespace std;

class foo
{
public:
    friend void printName(foo f);
    void setName(string name)
    {
        a = name;
    }
private:
    string a;
};

void printName(foo f)
{
    cout<<f.a;
}

int main()
{
    foo f;
    f.setName("pawan");
    printName(f);
}
