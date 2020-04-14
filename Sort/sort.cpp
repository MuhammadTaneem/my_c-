#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)
#define frr(x) for(int i=x-1;i>=0;i--)
#define frj(x) for(int j=0;j<x;j++)
int temp[10000];
int nxt()
{
    int x;
    cin>>x;
    return x;
}


int selection_sort(int arr[],int n)
{
    fr(n)
    {
        int k;
        for(int j=k=i;j<n;j++)
        {
            if(arr[k]>arr[j])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);

    }
    // fr(10)cout<<arr[i]<<" ";
     cout<<endl;


}

///bouble sort
int bouble_sort(int arr[],int n)
{
     fr(n)
    {
        frj(n-1)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
///insertion sort


int insertion_sort(int arr[],int n)
{
    int num=nxt();
    frr(n-1)
    {

        if(arr[i]>num)
        {
            arr[i+1]=arr[i];
        }
        else{
            arr[i+1]=num;
            break;
        }
    }
}
///merge sort
void merge(int arr[],int l,int m,int h)
{
    ///for merging array part
    int i=l,j=m+1;

    for(int k=l;k<=h;k++)
    {
       if(i==m+1)
        {
            temp[k]=arr[j++];
        }
        else if(j==h+1)
        {
            temp[k]=arr[i++];
        }
       else if(arr[i]<=arr[j]){temp[k]=arr[i];i++;}
        else {temp[k]=arr[j];j++;}

    }
    for(int k=l;k<=h;k++){
        arr[k]=temp[k];
    }

}
///merger sort funtion
void merge_sort(int arr[],int l,int h)
{

    if(l==h)return;
    int mid=(l+h)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,h);
    merge(arr,l,mid,h);

}
//quicksort
int partition(int *a,int start,int end)
{
    int pivot=a[end];
    //P-index indicates the pivot value index

    int P_index=start;
    int i,t; //t is temporary variable

    //Here we will check if array value is
    //less than pivot
    //then we will place it at left side
    //by swapping

    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }
     //Now exchanging value of
     //pivot and P-index
      t=a[end];
      a[end]=a[P_index];
      a[P_index]=t;

     //at last returning the pivot value index
     return P_index;
 }
 void Quicksort(int *a,int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10]={75,81,55,152,42,25,17,43,72,5};


   // selection_sort(arr,10);
   // bouble_sort(arr,10);
   //insertion_sort(arr,10);
  // merge_sort(arr,0,10);
   //Quicksort(arr,0,9);
   fr(10)cout<<arr[i]<<" ";


    return 0;
}
