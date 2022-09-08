#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	vector<string>encrypted;
	if(s.length()>16 && s.length()<=32)
	{
		s=s+string(32-s.length(),' ');
		//cout<<s<<endl;
		//cout<<s.length()<<endl;
		encrypted.push_back(s.substr(0,16));
		encrypted.push_back(s.substr(16,16));
	}else if (s.length()<=16)
	{
		s=s+string(16-s.length(),' ');
		//cout<<s.length()<<endl;
		encrypted.push_back(s.substr(0,16));
	}
	for(auto it:encrypted)
	{
		int arr[4][4];
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				arr[i][j]=it[4*i+j];
			}
			
		}
	}
	string key;
	getline(cin,key);
	key=key+string(16-key.length(),' ');
	int keyarr[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
				keyarr[i][j]=key[4*i+j];
				cout<<keyarr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
