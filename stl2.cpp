#include <vector>
#include <algorithm>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    vector <int> v;
    int i = 10;
    for (;i>0;i--)
    {
        v.push_back(i);
    }
    for (auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    int sum = 0;
    for (auto it:v)
    {
        cout<<it<<" ";
        sum += it;
    }
    if((find(v.begin(), v.end(), 9)!=v.end()))
    cout<<endl<<"found";
    cout<<endl<<accumulate(v.begin(), v.end(),0);
    cout<<endl<<distance(v.begin(), max_element(v.begin(), v.end()));
    cout<<endl;
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    sort(v.begin(), v.end());
    v.push_back(-9);
    for (auto it:v)
    {
        cout<<it<<" ";
    }
    all_of(v.begin(), v.end(), [](int x){ return x > 0;})?cout<<"pawan": cout<<"patil";

    //v.clear();
    int a[10];
    iota(a, a+10, 5);
    for(int i = 0; i< 10; i++)
        cout<<endl<<a[i];
    string b = "pawan";
    reverse(b.begin(), b.end());
    for (auto it:b)
    {
        cout<<it<<" ";
    }
}

