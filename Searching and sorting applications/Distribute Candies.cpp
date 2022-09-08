/*Distribute Candies
Send Feedback
Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of candies (between 1 and 1000000000). Shaky want to distribute these candies among his K (1<=K<=1000000000) IIIT-Delhi students. He wants to distribute them in a way such that:
1. All students get an equal number of candies.
2. All the candies which a student gets must be from a single box only.
As he wants to make all of them happy so he wants to give as many candies as possible. Help Shaky in finding out what is the maximum number of candies which a student can get.
Input
First-line contains T the number of test cases. 
The first line of each test case contains N and K.
Next line contains N space-separated integers, ith of which is the number of candies in the ith box.
Output
For each test case print the required answer in a separate line.
Constraints
1<= T <= 10^5
1 <= N <= 10^5
1 <= K <= 10^9
0 <= A[i] <= 10^9
Sum of N over all test cases doesn't exceed 10^6
Sample Input:
2
3 2 
3 1 4
4 1
3 2 3 9
Sample Output:
3
9*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPossible(ll arr[],int n,int k,ll mid)
{
    ll count=0;
    for(int i=0;i<n;i++)
    {
        count+=arr[i]/mid;
        if(count>=k)
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
        int n,k;
        cin >> n >> k;
        ll  arr[n];
     
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];

        }
        sort(arr,arr+n);
        ll start=0;
        ll end=arr[n-1];
        ll mid=0,ans=0;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(isPossible(arr,n,k,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        cout << ans << endl;
    }
}
