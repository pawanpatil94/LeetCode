#include <iostream>
#include <vector>
#include <random>

using namespace std;

int partition (vector <int> &v, int low, int high);
void display(vector <int> v, int size)
{
    for (int i=0; i<size; i++)
        cout<<v[i]<<" ";
}
void quicksort (vector <int> &v, int low, int high)
{
    if (low < high)
    {
        int pivot = partition (v, low, high);
        quicksort (v, low, pivot-1);
        quicksort (v, pivot+1, high);
    }
}
int partition (vector <int> &v, int low, int high)
{
    int i, j, pivot;
    pivot = v[high];
    j = low-1;
    for (int i = low; i <=high-1; i++)
    {
        if (v[i]<pivot)
        {
            j = j+1;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    int temp = v[j+1];
    v[j+1] = pivot;
    pivot = temp;
    return pivot;
}
int main()
{
    vector <int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(rand()%100);
    }
    display(v,v.size());
    quicksort(v, 0, v.size()-1);
    cout<<endl;
    display(v, v.size());
}
