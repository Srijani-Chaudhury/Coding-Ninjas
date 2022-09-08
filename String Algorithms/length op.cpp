#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>

int helper(unordered_map<char,int>&m,vector<char>&v,int k,int index)
{
   if(index==v.size())
       return 0;
   if(k==0)
       return 0;
   int ans1=helper(m,v,k-1,index+1)+m[v[index]];
   int ans2=helper(m,v,k,index+1);
   return max(ans1,ans2);
}
int getLengthofLongestSubstring(string s, int k) {
    vector<char>v;
    unordered_map<char,int>m;
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])==m.end())
        {
            v.push_back(s[i]);
            m.insert(make_pair(s[i],1));
		}
        else
            m[s[i]]++;
    }
    int ans=helper(m,v,k,0);
    return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		cout<<getLengthofLongestSubstring(s,n)<<endl;
	}
}
