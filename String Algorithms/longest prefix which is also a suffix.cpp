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
int main()
{
	string s;
	cin >> s;
	vector<int>ans=lps(s);
	for(int i=0;i<s.length();i++)
	{
		cout<<ans[i]<<" ";
	}
}
