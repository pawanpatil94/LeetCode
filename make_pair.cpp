#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    queue<pair<int,int> > v;
    v.push(make_pair(1,2));
    v.push(make_pair(4,5));
    v.push(make_pair(6,9));

    //queue<pair<int,int> > :: iterator it;
    while(v.size()!=0)
    {
        v.pop();
        cout<<v.front().first<<" "<<v.front().second;
    }

}
