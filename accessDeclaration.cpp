#include<iostream>
#include<string>

using namespace std;

class person
{
protected:
    string name;
public:
    person()
    {
        name = "rohit";
    }
    void display()
    {
        cout<<name<<endl;
    }
};

class student : private person
{
public:
    person :: name;
    void show()
    {
        //name = "pawan";
        display();
    }
};

int main()
{
    student s;
    s.name = "rahul";
    s.show();
}
