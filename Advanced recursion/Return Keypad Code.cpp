Return Keypad Code
Send Feedback
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
/*The numbers and their corresponding codes are given below:
0: ""
1: ""
2: "abc"
3: "def"
4: "ghi"
5: "jkl"
6: "mno"
7: "pqrs"
8: "tuv"
9: "wxyz"
Return empty string for numbers 0 and 1.
Note:
1. The order of strings are not important.
2. The input number will have digits between: [2, 9].
Input Format :
First line of input will contain T number of test cases.
Each input consists of a single line containing an integer n.
Output Format :
For each test case, print all possible strings in different lines.
Constraints :
1 <= T <= 100
1 <= n <= 10^6
Sample Input:
1
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf*/
#include<bits/stdc++.h>
using namespace std;
vector<string> comb(string t,string s[],int index)
{
    //cout <<t<<endl;
    if(index==t.length())
    {
        vector<string>ans;
        ans.push_back(""); 
        return ans;
    }
    vector<string>ans=comb(t,s,index+1);
    
    int pos=t[index]-'0';
    //cout<<pos<<endl;
    vector<string>res;
    for(int i=0;i<s[pos].size();i++)
    {
        for(int j=0;j<ans.size();j++)
        {
            res.push_back(s[pos][i]+ans[j]);
            //cout<<"hello"<<endl;
        }
    }
    return res;
        
    
}
int main(){
    
    // write your code here
    string s[10];
    s[0]="";
    s[1]="";
    s[2]="abc";
    s[3]="def";
    
    s[4]="ghi";
    s[5]="jkl";
    s[6]="mno";
    s[7]="pqrs";
    s[8]="tuv";
    s[9]="wxyz";
    int t;
    cin >> t;
    while(t--)
    {
        string m;
        cin >> m;

        vector<string> ans=comb(m,s,0);
      
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<endl;
        }
    }
    return 0;
}
