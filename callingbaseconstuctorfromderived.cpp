#include <iostream>

using namespace std;
class father
{
protected:
    int fage;
public:
    father (int iage)
    {
        fage = 0;
        cout<<"Father Constructor "<<endl;
    }
};

class child : public father
{
public:
    child (int x): father (x)
    {
        fage = x;
        cout<<"child Constructor"<<endl;
    }
    void display ()
    {
        cout<<"age is: "<<fage;
    }
};

int main()
{
    child c(24);
    c.display();
}
