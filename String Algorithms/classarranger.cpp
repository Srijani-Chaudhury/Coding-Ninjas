#include<bits/stdc++.h>
#define sonkha int
#define foc(n) for(int i=0;i<n;i++)
#define f(c,r) if(c==r)
using namespace std;
void solve(string s)
{
	sonkha n=s.length();
	sonkha ones=0,zeroes=0;
	foc(n)
	{
		f(s[i],'B')ones++;
		else zeroes++;
	}
	if(ones > zeroes +1 || zeroes > ones+1) cout<<-1;
	else if(n%2)
	{
		sonkha num=floor((n+1)/2);
		sonkha one_even=0,zero_even=0;
		foc(n)
		{
			if(i%2==0)
			{
				f(s[i],'B') one_even++;
				else zero_even++;
			}
		}
		if(ones>zeroes) cout<<num-one_even;
		else cout<<num-zero_even;
	}else
	{
		sonkha one_odd,one_even=0;
		foc(n)
		{
			f(s[i],'B')
			{
				if(i%2) one_odd++;
				else one_even++;
			}
				
		}
		cout<<min((floor(n/2)-one_odd),(floor(n/2)-one_even));
	}
}
int main()
{
	string s;
	cin >> s;
	solve(s);
	
}
