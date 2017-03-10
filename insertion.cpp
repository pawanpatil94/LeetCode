#include <iostream>
#include <vector>
#include <random>
#include <limits.h>
using namespace std;

class Sorts
{
public:
    vector <int> insertion (vector <int> v, int size);
    void mergesort(vector <int> v, int low, int high);
    void Merge (vector <int> v, int low, int mid, int high)
    {
        vector <int> a (0, mid-low+1+1);
        vector <int> b (0, high-mid+1+1);

        for (int i = 0; i < mid+1; i++)
            a.push_back(v[i]);
        for (int i = mid+1; i < high; i++)
            b.push_back(v[i]);
        a.push_back(INT_MAX);
        b.push_back(INT_MAX);
        int i, j , k;
        i = 0; j = 0; k = 0;
        for (k=0; k<v.size(); k++)
        {
            if (a[i]<b[j])
            {
                v[k] = a[i];
                i++;
            }
            else
            {
                v[k] = b[j];
                j++;
            }
        }
        display(v, v.size());
    }

    void display (vector <int> v, int size)
    {
        int i;
        for (i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};

void Sorts :: mergesort (vector <int> v, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high)/2;
        mergesort(v, low, mid);
        mergesort(v, mid+1, high);
        Merge(v,low, mid, high);
    }
}

vector <int> Sorts :: insertion (vector <int> v, int size)
{
        int i, j, key;
        for (i=1; i<v.size(); i++)
        {
            key = v[i];
            j = i-1;
            while (j>-1 && v[j]>key)
            {
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = key;
        }
        return v;
}

int main()
{
    Sorts i;
    vector <int> v;
    for (int i = 0; i<10000; i++)
    {
        v.push_back(rand());
    }
    i.display(i.insertion(v, v.size()), v.size());
    //i.mergesort(v,0, v.size());
}
