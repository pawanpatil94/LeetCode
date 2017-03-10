#include<iostream>
#include<string>

using namespace std;

class media
{
protected:
    string name;
    float price;
public:
    media(string name, float price)
    {
        this->name = name;
        this->price = price;
    }
     virtual void display(){}
};

class book : public media
{
private:
    int pages;
public:
    book(string name, float price, int pages):media(name, price)
    {
        this->pages = pages;
    }
    void display()
    {
        cout<<"Book"<<endl<<"Name: "<<name<<endl<<"Price: "<<price<<endl<<"Pages: "<<pages<<endl;
    }
};

class tape : public media
{
private:
    int time;
public:
    tape(string name, float price, int time):media(name, price)
    {
        this->time = time;
    }
    void display()
    {
        cout<<"Book"<<endl<<"Name: "<<name<<endl<<"Price: "<<price<<endl<<"time: "<<time<<endl;    }
};

int main()
{
    string name = "pawan";
    float price = 1.5;
    int pages = 9;

    book b(name, price, pages);
    media *m = &b;
    m->display();

    int time = 8;
    tape t(name, 20, time);
    m = &t;
    m->display();
}
