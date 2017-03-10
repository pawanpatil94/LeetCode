#include <iostream>

using namespace std;

unsigned long long fib(unsigned long long int n)
{
    if(n==0)
        return 0;
    if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{

    unsigned long long res;
    cin>>res;

    cout<<fib(res);
}
