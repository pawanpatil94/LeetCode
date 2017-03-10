#include <iostream>
#include <string>
//#include <algorithm>
#include <map>

using namespace std;
void countConsecutive(string s)
{
    int count = 1;
    string res;
    for (int i = 0; i<s.size(); i++)
    {
        if (s[i] == s[i+1])
            count++;
        else
        {
            cout<<s[i]<<count;
            count=1;
        }
    }
}

int main()
{
    countConsecutive("aabccdeeaa");
}

