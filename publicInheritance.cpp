#include <iostream>
using namespace std;

class bird
{
private:
    int pri;

protected:
    int pro;


    public:
        bird()
    {
        pri = 0;
        pro = 0;
        pub = 0;
        cout<<pri<<" "<<pro<<" "<<pub<<endl;
    }
    int pub;
    void setData(int a, int b, int c)
    {
        pri = a;
        pro = b;
        pub = c;
    }
    void display()
    {
        cout<<"pri: "<<pri<<" pro: "<<pro<<" pub: "<<pub<<endl;
    }
};

class sparrow : public bird
{
protected:
    void pawan()
    {
        cout<<"nothing"<<endl;
    }
public:
    int d;
    void setProtected(int d)
    {
        pro = d;
        pawan();
        //pri = 100;
    }
};

class chutiya : public sparrow
{
public:
    void disp()
    {
        cout<<"chutiya"<<endl;
    }
};

int main()
{
    bird b;
    sparrow s;
    s.setData(1,2,3);
    s.pub = 10;
   //s.pawan();
    s.setProtected(85);
    b.setData(45,87,963);
    s.display();
    chutiya c;
    c.setProtected(100);
}
