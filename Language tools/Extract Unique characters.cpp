#include<bits/stdc++.h>
string uniqueChar(string str) {
	// Write your code herei
    string result;
    result="";
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<str.length();i++){
        if(arr[str[i]-'a']==0){
            arr[str[i]-'a']=1;
            result=result+str[i];
        }
    }
    return result;
}
