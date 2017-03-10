#include <iostream>
#include <vector>
#include <random>
#include <limits.h>
using namespace std;

void mergee (vector <int> &a, int low, int mid, int high);

void display(vector <int> a, int size)
{
    for (int i = 0; i< a.size(); i++)
        cout<<a[i]<<" ";
}
void mergesort (vector <int> &a, int low, int high)
{
    if (low < high)
    {
        int mid = (low+high)/2;
        mergesort(a, low, mid);
        mergesort(a, mid+1, high);
        mergee(a, low, mid, high);
    }
}

void mergee (vector <int> &a, int low, int mid, int high)
{
    int left[mid-low+1];
    int right[high-mid];

    for (int i = 0; i < mid-low+1; i++)
        left[i] = a[low+i];
    for (int i = 0; i < high-mid; i++)
        right[i] = a[mid+1+i];
    int i, j, k;
    i = j = 0;
    k = low;
    while (i<mid-low+1 && j<high-mid)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < mid-low+1)
    {
        a[k] = left[i];
        i++; k++;
    }
    while (j < high-mid)
    {
        a[k] = right[j];
        j++; k++;
    }
}
int main()
{
    //int a[10];
    vector <int> a;
    for (int i = 0; i < 10000; i++)
    {
        //a[i] = rand()%100;
        a.push_back(rand());
    }
    //display(a, 10);
    mergesort(a, 0, 9);
    cout<<endl;
    display(a, 10);
}
