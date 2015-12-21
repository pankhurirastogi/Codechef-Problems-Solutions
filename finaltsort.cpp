#include<iostream>
#include<vector>
using namespace std;
void merg(vector<int> &a, int low, int high, int mid);

void mergesort(vector<int> &a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merg(a,low,high,mid);
    }
    return;
}
void merg(vector<int> &a, int low, int high, int mid)
{
    int i, j, k;
    vector<int> c(1000000);
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{   int t,i;
    vector<int> a(1000000);
    cin>>t;
     for(i=0;i<t;i++)
     {
         cin>>a[i];
     }
     mergesort(a,0,t-1);
          for(i=0;i<t;i++)
     {
         cout<<a[i]<<"\n";
     }



    return 0;
}
