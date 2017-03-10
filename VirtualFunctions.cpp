#include<iostream>
#include<string>
using namespace std;

class person
{
public:
    virtual void display()
    {
        cout<<"Person"<<endl;
    }
};

class student : public person
{
public:
    void display()
    {
        cout<<"student"<<endl;
    }
};

class gstudent : public person
{
public:
    void display()
    {
        cout<<"Gstudent"<<endl;
    }
};
void show(person &p)
{
    p.display();
}

int main()
{
    person p;
    student s;
    gstudent gs;

    show(p);
    show(s);
    show(gs);
}
