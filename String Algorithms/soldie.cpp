#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;

int main()
{
	ll n,m;
	cin >> n >> m;
	vector<ll>Arr(n);
	//taking input
	for(int i=0;i<n;i++)
	{
		cin >> Arr[i];
	}
	//for each equation
	while(m--)
	{
		ll c,x;
		cin >> c >> x;
		//defining a vector of double size
		vector<ll>arr(2*x);
		for(int i=0;i<2*x;i++)
		{
			cin >> arr[i];
		}
		//declaring a temp
		ll temp=Arr[c-1];
		Arr[c-1]=0;
		//looping for answer
		for(int i=0;i<arr.size()-1;i+=2)
		{
			Arr[arr[i+1]-1]=(Arr[arr[i+1]-1]+temp*arr[i])%mod;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<Arr[i]<<endl;
	}
}
