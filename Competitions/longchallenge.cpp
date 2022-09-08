#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>primefactor(long long n)
{
	vector<ll> ans;
	int count=0;
	while (n % 2 == 0)
    {
    	if(count==0)
    	{
    		ans.push_back(2);
    		count++;
		}
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        count=0;
        while (n % i == 0)
        {
        	if(count==0)
        	{
        		ans.push_back(i);
        		count++;
			}
            n = n/i;
        }
    }
    if (n > 2)
        ans.push_back(n);
    return ans;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,b;
		cin >> a >> b;
	    if(a==1 && b==1)
	    {
	    	cout<<-1<<endl;
		}else if(__gcd(a,b)==1)
		{
			vector<ll> ans=primefactor(a);
			vector<ll> hubs=primefactor(b);
			for(int i=0;i<hubs.size();i++)
			{
				ans.push_back(hubs[i]);
			}
			sort(ans.begin(),ans.end());
			long long mini=1e15;
			for(int i=0;i<ans.size()-1;i++)
			{
				if((ans[i+1]-ans[i])<mini)
				{
					mini=ans[i+1]-ans[i];
				}
			}
			cout<<mini<<endl;
		}else
		{
			cout<<0<<endl;
		}
	}
}
