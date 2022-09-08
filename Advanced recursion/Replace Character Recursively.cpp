/*Replace Character Recursively
Send Feedback
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)
Output Format :
Updated string
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd*/
#include<bits/stdc++.h>
using namespace std;
void replaceCharacter(char s[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    if(s[0]=='\0')
    {
        return;
    }
    if(s[0]==c1){
        s[0]=c2;
    }
    replaceCharacter(s+1,c1,c2);
}
int main(){
    
    // write your code here
    int t;
    cin >> t;
    while(t--)
    {
        char s[100];
        cin >> s;
        char a,x;
        cin >> a >> x;
        replaceCharacter(s,a,x);
        for(int i=0;s[i]!='\0';i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
