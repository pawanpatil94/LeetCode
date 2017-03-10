#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;
    int f, s;
    f = 1;
    s = 1;
    unsigned long long int t;
    cout<<"1:"<<f<<" 2:"<<s;
    for(unsigned long long int i=0; i<n-2; i++)
    {
        t = s+f;
        if(t!=0 || t!=1)
        //cout<<" "<<i+3<<":"<<t;
        f = s;
        s = t;
    }
    cout<<endl<<t<<endl;
}
