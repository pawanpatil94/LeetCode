#include<iostream>
#include <set>
#include <vector>
using namespace std;

void permutation(set<vector<int>>& s, vector<int>& nums, int low, int high);
vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        set<vector<int>> s;
        set<vector<int>> :: iterator its;
        vector<vector<int>> :: iterator it;
        permutation(s, nums, 0, nums.size()-1);
        vector <vector<int>> v (s.begin(), s.end());
        return v;
    }

    inline void swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;

    }
    void permutation(set<vector<int>>& s, vector<int>& nums, int low, int high)
    {
        if (low == high)
            s.insert(nums);
        else
        {
            for (int i = low; i<=high; i++)
            {
                swap(nums[low], nums[i]);
                permutation(s, nums, low+1, high);
                swap(nums[low], nums[i]);
            }
        }
    }

    int main()
    {
        vector<vector<int>> v;
        vector <int> temp;
        temp.push_back(2);
        temp.push_back(3);
        temp.push_back(2);
        temp.push_back(0);
        temp.push_back(0);
        temp.push_back(3);
        temp.push_back(3);

        v = permuteUnique(temp);
        for(auto i: v)
        {
            for (auto j: i)
                cout<<j<<" ";
            cout<<endl;
        }
    }
