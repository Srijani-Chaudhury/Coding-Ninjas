#include<bits/stdc++.h>
#define vectur vector<vector<int>>
#define babakenochakor for
#define indur if
#define ll long long
#define sajiye sort
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll a,b;
		cin >> a >> b;
		vector<ll>arr(a);
		babakenochakor(int i=0;i<a;i++)
		{
			cin >>arr[i];
		}
		sajiye(arr.begin(),arr.end());
		cout<<arr[min(b,a-1)]<<endl;
	}
}
