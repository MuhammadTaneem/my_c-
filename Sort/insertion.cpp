#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl "\n"
#define fr(x) for(int i=0;i<x;i++)
#define frr(x) for(int i=x-1;i>=0;i--)
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
    int arr[10]={1,6,8,24,45,67,88,89,112};
    int num=nxt();
    frr(9)
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
    fr(10)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
