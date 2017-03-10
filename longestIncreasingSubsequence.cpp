#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestIncreasingSubsequence(vector <int> &v)
{
    vector <int> ls(v.size(), 0);
    ls[0]=1;
    for(int i=1; i<v.size(); i++)
    {
        vector <int> temp;
        for(int j=0; j<i; j++)
        {
            if(v[i]>v[j])
            {
                temp.push_back(ls[j]);
            }
            else
            {
                temp.push_back(1);
            }

        }
        ls[i] = 1+ *max_element(temp.begin(), temp.end());
    }
    return *max_element(ls.begin(), ls.end());
}

int main()
{
    vector <int> v;
    v.push_back(10);
    //v.push_back(22);
    v.push_back(9);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(101);
    v.push_back(18);
    cout<<longestIncreasingSubsequence(v);
}
