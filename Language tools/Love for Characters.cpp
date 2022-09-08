#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    char str[n];
    cin >> str;
    map<char,int> freq;
    for(i=0;i<n;i++){
        if(str[i]=='a')
        {
            freq['a']++;
        }
        else if(str[i]=='s'){
            freq['s']++;
        }
        else if(str[i]=='p'){
            freq['p']++;
        }
    }
    cout << freq['a'] << " " << freq['s']<< " "<< freq['p']<< endl;
	return 0;
}

