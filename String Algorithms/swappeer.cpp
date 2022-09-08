#include<bits/stdc++.h>
#define foc(n) for(int i=0;i<n;i++)
#define f(c,r) if(c==r)
using namespace std;
void solve(string s,string c)
{
	int index=0;
	foc((int)c.length())
	{
		    
			f(c[i],'L')
			{
				if(index>0)
				{
					index--;
				}
			}
			else f(c[i],'R')
			{
			   if(index+1<(int)s.length())
				{
					index++;
				}	
			}
			
			else f(c[i],'T')
			{
				if(s[index]!='9')
				{
					s[index]++;
				}
			}
			else f(c[i],'S')
			{
				i++;
				string answer;
				for(i;i<(int)c.length()&& c[i]>='0' && c[i]<='9';i++)
				{
					answer.push_back(c[i]);
				}
				i--;
				int index1=stoi(answer);
				swap(s[index],s[index1-1]);
			}else f(c[i],'D')
			{
				if(s[index]!='0')
				{
					s[index]--;
				}
			}
	}
	cout<<s<<endl;
}
int main()
{
	string s,t;
	cin >> s >> t;
	solve(s,t);
	
}
