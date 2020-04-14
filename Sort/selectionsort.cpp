#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)
int nxt()
{
    int x;
    cin>>x;
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10]={75,81,55,152,42,25,17,43,72,5};
    fr(10)
    {
        int k;
        for(int j=k=i;j<10;j++)
        {
            if(arr[k]>arr[j])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);

    }
    fr(10)cout<<arr[i]<<" ";
    return 0;
}
