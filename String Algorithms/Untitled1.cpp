#include<bits/stdc++.h>
#define vectur vector<vector<int>>
#define fut for(int i=n-1;i>=0;i--)
#define foj for(int j=0;j<=i;j++)
#define jodi(x,y) if(x==y)
#define futo for(auto x:res)
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n ;
	    string s;
	    cin >> s;
	    vectur res;
	    //
	    fut
	    {
	    	jodi(s[i],'0')
	    	{
	    		int x=i+1;
	    		foj
	    		{
	    			jodi(s[i],'1')
	    			{
	    				s[j]='0';
	    				
					}else
					{
						s[j]='1';
					}
				}
				res.push_back({1ll,x});
			}
		}
		int size=res.size();
		cout<<size<<endl;
		futo
		{
			cout<<x[0]<<" "<<x[1]<<endl;
		}
		
	}
}
