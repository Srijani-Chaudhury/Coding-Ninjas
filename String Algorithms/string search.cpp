#include<bits/stdc++.h>
using namespace std;
vector<int> lps(string s)
{
	int n=s.length();
	vector<int>temp(n);
    temp[0]=0;
    int i=1;
    int j=0;
    while(i<n)
    {
    	if(s[i]==s[j])
    	{
    		temp[i]=j+1;
    		j++;
    		i++;
		}
		else
		{
			if(j!=0)
			{
				j=temp[j-1];
			}
			else
			{
				temp[i]=0;
				i++;
			}
		}
	}
	return temp;
}
bool kmp(string s,string t,vector<int>&lps)
{
	int n=s.length();
	int m=t.length();
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(s[i]==t[j])
		{
			i++;
			j++;
		}else
		{
			if(j!=0)
			{
				j=lps[j-1];
			}else
			{
				i++;
			}
		}
	}
	if(j==m)
	{
		return true;
	}
	return false;
}
int main()
{
	string s,t;
	cin >> s>>t;
	vector<int>ans=lps(s);
	cout<<kmp(t,s,ans)<<endl;
}
