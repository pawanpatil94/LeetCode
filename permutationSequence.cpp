#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <stdlib.h>

using namespace std;

string getPermutation(int n, int k)
    {
        string s;
        for (int i=1; i<=n; i++)
        {
           s = s+to_string(i);
        }
        set <string> v;
        permutation(v,s,0,s.size()-1,k);
        vector <string> vec;
        for (auto i:v)
        {
            vec.push_back(i);
        }
        return vec[k-1];
    }

    void swap(char &a, char &b)
    {
        char temp;
        temp = a;
        a = b;
        b = temp;
    }

    void permutation(set <string> &v, string s, int low, int high, int k)
    {
        if (low==high)
        {
            v.insert(s);
            if (v.size()==k)
                return;
        }
        else
        {
            for(int i=low; i<=high; i++)
            {
                swap(s[low],s[i]);
                permutation(v, s, low+1, high,k);
                swap(s[low],s[i]);
            }
        }
    }
int main()
{
    getPermutation(3, 1);
}
