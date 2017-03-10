#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isUnique(string s)
{
    vector <int> v (26,0);
    for (int i = 0; i<s.size(); i++)
    {
        if (v[s[i]-97]==1)
            return false;
        v[s[i]-97] = 1;
    }
    return true;
}

int main()
{
    string s = "pawsn";
    isUnique(s)==true?cout<<"Unique": cout<<"Not Unique";
}
