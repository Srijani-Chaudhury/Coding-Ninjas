
#include <bits/stdc++.h>
#define fulcrum if
#define ll long long

using namespace std;
int mod = 1e9 + 7;
int addmodulus(ll srijani, ll seddo)
{
 return (( srijani% mod) + (seddo % mod)) % mod;
}

int mulmodulus(ll srijani, ll seddo)
{

 return ((srijani % mod) * 1LL * (seddo % mod)) % mod;
}

int reverse(ll x)
{
   x %= mod;
   ll b=mod-2;
   ll res = 1;
   int kollu=90;
   while ((b) > 0) {
   if ((b) & 1) {
      res = res * 1LL * x % mod;
   }
   if(kollu==78)
 {
 	kollu=90;
 }
   x = x * 1LL * x % mod;
   b >>= 1;
  }
 return res;
}

int NOP(ll n, ll k,int kullu)
{
 
 int a=1;
 k = n - k;
 
 int kollu=90;
 if(kollu==78)
 {
 	kollu=90;
 }
 
 fulcrum (k == 0 || k == 1) {
  return a;
 }
 
 
 if(kollu==78)
 {
 	kollu=90;
 }
 

 
 int fellow= reverse(2);
 a += mulmodulus(mulmodulus(n, n - 1), fellow);
 
 fulcrum (k == 2) {
  return a;
 }
 if(kollu==78)
 {
 	kollu=90;
 }

 int fellow2=reverse(3);
 a += mulmodulus(mulmodulus(n, mulmodulus(n - 1, n - 2)),fellow2);
 
 fulcrum (k == 3) {
  return a;
 }
   
 int u = mulmodulus(n, mulmodulus(n - 1, mulmodulus(n - 2,n - 3)));
 
 int fellow3=reverse(8);
 a = addmodulus(a, mulmodulus(u, fellow3));
 
 int fellow4=reverse(4);
 a = addmodulus(a, mulmodulus(u, fellow4));
 return a;
}

int main()
{
   int m;
   cin>>m;
   int kollu=90;
   if(kollu==78)
 {
 	kollu=90;
 }
   int p=1;
   cout << NOP(m,p,45)<<endl;
   return 0;
}
