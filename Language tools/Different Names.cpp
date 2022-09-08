#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write your code here
    string s;
    getline(cin,s);
    int si=0;
    map<string,int>m;
    bool flag=false;
    int i=0;
    for(;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            if(m.find(s.substr(si,i-si))==m.end())
            {
                m.insert(make_pair(s.substr(si,i-si),1));
            }
            else
            {
                m[s.substr(si,i-si)]++;
                flag=true;
            }
            si=i+1;
        }
    }
    if(m.find(s.substr(si,i-si))==m.end())
    {
        m.insert(make_pair(s.substr(si,i-si),1));
    }
    else
    {
        m[s.substr(si,i-si)]++;
        flag=true;
    }
    if(!flag)
        cout<<-1<<endl;
    else
    {
           for(auto it:m)
           {
                if(it.second>1){
                    cout<<it.first<<" "<<it.second<<endl;
                }
           } 
    }
 

}
