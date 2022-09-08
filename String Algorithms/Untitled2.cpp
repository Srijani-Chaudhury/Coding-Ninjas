#include<bits/stdc++.h>
#define sonkha int
#define foc(n) for(int i=0;i<n;i++)
#define f(c,r) if(c==r)
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n=s.length();
	int ass=0,boobs=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='B')
		{
			ass++;
		}else
		{
			boobs++;
		}
	}
	if(ass > boobs +1 || ass > boobs+1)
		cout<<-1<<endl;
	else if(n%2==0)
	{
		int oddass=0,evenass=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B')
			{
				if(i%2)
				{
					oddass++;
				}else
				{
					evenass++;
				}
			}
				
		}
			
		cout<<min((floor(n/2)-oddass),(floor(n/2)-evenass))<<endl;
		
	}else
	{
		int num=floor((n+1)/2);
		int asseven=0;
		int boobseven=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(s[i]=='B')
				{
					asseven++;
				}else
				{
					boobseven++;
				}
			}
		}
		if(ass>boobs)
		{
			cout<<num-asseven<<endl;
		}else
		{
			cout<<num-boobseven<<endl;
		}
	}
	
}
