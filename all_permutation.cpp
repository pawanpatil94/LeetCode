#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

void permutation(string &a, int low, int high)
{
    if(low == high)
        cout<<a<<endl;
    else
    {
        for(int i = low; i<=high; i++)
        {
            swap(a[low], a[i]);
            permutation(a, low+1, high);
            swap(a[low], a[i]);
        }
    }
}

int main()
{
    string a = "12345678";
    sort(a.begin(), a.end());
    permutation(a, 0, a.size()-1);
}
