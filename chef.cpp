#include<iostream>
using namespace std ;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 1; i <= n; i++)

       // Last i elements are already in place
       for (j = 1; j <= n-i; j++)
           if (arr[j] >= arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    for (int i=1; i <= size; i++)
        cout<<arr[i];
       cout<<"\n";
}
int main()
{    int t ;
     cin>>t ;
     for(int i=0;i<t;i++)
     {
         int m ,n ;
         cin>>m>>n;

         int jobs[n];
         int tot_jobs[m];
        for(int k=1;k<=m;k++)
         {
             tot_jobs[k]=k;
         }



         for(int j=1 ; j<=n;j++)
         {
             cin>>jobs[j];

             tot_jobs[jobs[j]]=0 ;
         }

       /**  for(int k=1;k<=m;k++)
         {
             cout<<tot_jobs[k]<<"\n";
         }**/

         bubbleSort(tot_jobs , m);
         //cout<<"sorted array";
        // printArray(tot_jobs , m);


        /** for(int u= 0; u<m-1;u++)
         {
             for(int v=0 ;v<m-u-1;v++)
             {
                 if(tot_jobs[v]>tot_jobs[v+1])
                 {
                     int temp =tot_jobs[v];
                     tot_jobs[v]=tot_jobs[v+1];
                     tot_jobs[v+1]=temp;
                 }
             }
         }

         cout<<"sorted array";
         for(int k=1;k<=m;k++)
         {
             cout<<tot_jobs[k]<<"\n";
         }**/

        // cout<<"chef 's value "<<tot_jobs[n+1];

        // cout<<"chefs jobs"<<"\n";
         int li=n+1;

         if(li>m)
         {
             cout<<" ";
         }
         else{
         for(int l=n+1;l<=m;l=l+2)
         {
             cout<<tot_jobs[l]<<" ";
         }
     }

         cout<<"\n";
         int lo=n+2;
         if(lo>m)
         {
             cout<<" ";
         }
         for(int l=n+2 ;l<=m ; l=l+2)
         {
             cout<<tot_jobs[l]<<" ";
         }

     }
    return 0;
}
