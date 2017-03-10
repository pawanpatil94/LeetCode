#include <iostream>

using namespace std;

int lookup[50000];

void _initialise()
{
    for(int i=0; i<50000; i++)
        lookup[i]=-1;
}

unsigned long long int fib(int n)
{
    if(n==0)
        lookup[0]=0;
    if (n==1)
        lookup[1]=1;
    else if(lookup[n]==-1)
        lookup[n]=fib(n-1)+fib(n-2);
    return lookup[n];
}

int main()
{
 _initialise();
 int n;
 cin>>n;
 cout<<fib(n);
}
