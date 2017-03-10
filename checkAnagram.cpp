#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagram(string one, string two)
{
    if (one.size()!=two.size())
        return 0;
    vector <int> sum(26 ,0);
    for (int i = 0; i<one.size(); i++)
    {
        sum[one[i]-97]++;
        sum[two[i]-97]--;
    }
    if (any_of(sum.begin(), sum.end(), [](int i){return i!=0;}))
        return false;
    else
        return true;
}

int main()
{
    string one = "teacher";
    string two = "cheater";
    areAnagram(one, two)==1?cout<<"Anagrams": cout<<"Not Anagrams";
}
