#include <vector>
#include <algorithm>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    vector <int> v(100);
    int i = 0;
    for (auto it:v)
    {
        v.push_back(i++);
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
    if((find(v.begin(), v.end(), 99)!=v.end()))
    cout<<endl<<"found";
    cout<<endl<<accumulate(v.begin(), v.end(),0);
}
