#include<bits/stdc++.h>
using namespace std;
int helper(string s,int dp[])
{
	if(s.size()==0)
	{
		return 0;
	}
	if(s.size()==1)
	{
		return 1;
	}
	if(dp[s.size()-1]!=-1)
	{
		return dp[s.size()-1];
	}
	int ans1=helper(s.substr(1),dp)+1;
	int ans2=INT_MAX,ans3=INT_MAX;
	if(s[0]=='1' && s[1]=='0')
	{
		ans2=helper(s.substr(2),dp);
	}
	if(s[0]=='1' && s[1]=='1')
	{
		ans3=helper(s.substr(2),dp);
	}
	int final_answer=min(ans1,min(ans2,ans3));
	dp[s.size()-1]=final_answer;
	return final_answer;
}
int main()
{
	string s;
	cin >> s;
	int dp[s.size()];
	memset(dp,-1,sizeof(dp));
	cout << helper(s,dp) <<endl;
}
