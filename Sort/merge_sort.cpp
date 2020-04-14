#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)
#define frj(x) for(int j=0;j<x;j++)
#define frr(x) for(int i=x-1;i>=0;i--)
int nxt()
{
    int x;
    cin>>x;
    return x;
}
int temp[12];
void merge(int arr[],int l,int m,int h)
{
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

void merge_sort(int arr[],int l,int h)
{

    if(l==h)return;
    int mid=(l+h)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,h);
    merge(arr,l,mid,h);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10]={3,4,7,8,10,6,3,56,89,12};
    merge_sort(arr,0,9);
    fr(10)cout<<arr[i]<<" ";

    return 0;
}

