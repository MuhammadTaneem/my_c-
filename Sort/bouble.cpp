#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)
#define frj(x) for(int j=0;j<x;j++)
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
    int arr[5]={1,43,6,8,24,};

    fr(5)
    {
        frj(5-1)
        {
            if(arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    fr(5)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
