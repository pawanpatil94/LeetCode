#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int longestCommnonSubstring(string a, string b)
{
    int current, maxCount;
    current = maxCount = 0;
    int matrix[a.size()-1][b.size()-1];

    for (int i=0; i<a.size(); i++)
    {
        for(int j=0; j<b.size(); j++)
        {
            matrix[i][j]=0;
            if(a[i]==b[j])
            {
                if(i==0 || j==0)
                    matrix[i][j]=1;
                else
                {
                    matrix[i][j] = matrix[i-1][j-1]+1;
                    current = matrix[i][j];
                }
            }
            cout<<matrix[i][j]<<" ";
            maxCount = max(current, maxCount);
            current = 0;
        }
        cout<<endl;
    }
        return maxCount;
}

int main()
{
    string str1 = "LCLCLcp";
    string str2 = "CLCLcp";
    cout<<longestCommnonSubstring(str1, str2);
}
