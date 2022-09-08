#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	cin >> t;
	int count=1;
	while(count<=t)
	{
		string s;
		cin >> s;
		long long int curr_sum=0;
		int count_of_nine=1;
		for(int i=0;i<s.length();i++)
		{
			int ans=s[i]-'0';
			curr_sum+=ans;
		}
	    if(curr_sum%9==0)
		{
			cout<<"Case #" << count << ": " << s <<endl;
			count++;
			continue;
		}
		int ans=9-(curr_sum%9);
		bool flag=true;
		for(int i=0;i<s.length();i++)
		{
			if((s[i]-'0')>ans)
			{
				cout<<"Case #" << count << ": " << s.substr(0,i)+to_string(ans)+s.substr(i) <<endl;
				flag=false;
				break;
			}
		}
		if(flag==true)
		{
			cout<<"Case #" << count << ": " << s+to_string(ans) <<endl;
		}
		
		count++;
	}

}
