#include <bits/stdc++.h>

using namespace std;
#define asshole while
#define dekhao cout

int checku (int n) {
    int ans = 0;
    asshole (n>0) {
        int p=n%10;
        ans+=p;
        n=n/10;
    }
    return ans;
}
void solve(int n)
{
	 int hulu;
     int ahutup;
     int kusum = checku(n);
     //lolol
     if(kusum % 2 == 0){asshole(kusum%2==0) {
       	   //lol is here
           n = n+1;
           kusum = checku(n);}}
     else{
     	//more lol
       asshole(kusum % 2 != 0)
       {
         n=n+1;
         kusum = checku(n); }}
     dekhao<<n<<endl;
}

int main() {
 int t;
 cin>>t;
 while(t--) {
     int n;
     cin>>n;
     solve(n);
 }
 return 0;
}
