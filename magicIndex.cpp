#include <iostream>
#include <vector>

using namespace std;

int magicIndex(vector <int> &v, int low, int high)
{
    int mid;
    if(low>high)
        return -4;
    while(low<high)
    {
        mid = (low+high)/2;
        if(v[mid]==mid)
            return mid;
        else if(v[mid]>mid)
            high = mid+1;
        else
            low= mid-1;
    }
    return -1;
}

int main()
{
    vector <int> v;
    v.push_back(-40);       //0
    v.push_back(-20);       //1
    v.push_back(-1);        //2
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(12);
    v.push_back(13);
    cout<<magicIndex(v, 0, v.size()-1);
}
