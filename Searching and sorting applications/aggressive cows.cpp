#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPossible(ll arr[],ll dis,int c,int n)
{
    int count=1;
    ll last_pos=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-last_pos>=dis)
        {
            last_pos=arr[i];
            count++;
        }
        if(count==c)
        {
            return true;
        }
    }
    return false;
}
int main(){
    // write your code
    int t;
    cin >> t;
    while(t--)
    {
        int n,c;
        cin >> n >> c;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        ll range=arr[n-1]-arr[0];
        ll start=0;
        ll end=range;
        ll ans=0;
        while(start<=end)
        {
            ll mid=start+(end-start)/2;
            if(isPossible(arr,mid,c,n))
            {
                ans=mid;
                start=mid+1;
            }else
            {
                end=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
