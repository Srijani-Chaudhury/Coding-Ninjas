// time complexity is of O(n*m)
#include<bits/stdc++.h>
using namespace std;
bool patternfound(string s,string m)
{
	int n=s.length();
	int p=m.length();
	for(int i=0;i<=n-p;i++)
	{
		bool isfound=true;
		for(int j=0;j<p;j++)
		{
			
			if(s[i+j]!=m[j])
			{
				isfound=false;
				break;
			}
		}
		if(isfound==true)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	string p,m;
	cin >> p >> m;
	cout<<patternfound(p,m)<<endl;
}
