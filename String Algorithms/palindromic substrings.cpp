#include<bits/stdc++.h>
using namespace std;
int longest(string s)
{
    int count=0;
    int n=s.length();
    for(int i=0;i<s.length();i++)
    {
        int left=i;
        int right=i;
        while(left>=0 && right < n && s[left]==[right])
        {
            count++;
            left--;
            right++;
        }
        left=i;
        right=i+1;
        while(left>=0 && right < n && s[left]==s[right])
        {
            count++;
            left--;
            right++;
        }
    }
    return count;
}
int main()
{
    
    // write your code here
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout<<longest(s)<<endl;
    }
    return 0;
}
