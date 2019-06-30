#include <bits/stdc++.h>  // using gnu c++ compiler.
// #include <iostream>
// #include <cstdio>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <map>

using namespace std;  // if U using this code in a project, U are fired.
using ll = long long;  // using `g++ hoge.cc -o msain.out -Wall -Wextra -std=c++11`
// typedef long long ll;  // needless -std settings.

// @FYI
// @url : https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a

#define rep(i, n) for(int i = 0, i##_len = (n); i < i##_len; ++i)
#define _rep(i, n) for(int i = (n) - 1; i > 0; --i)
#define all(vec) (vec).begin(), (vec).end()

// @special functions
// @comment : `ll comb` is `ll modpow` required.

// int gcd(int r, int l){return l?gcd(l, r%l):r;}
// ll modinv(ll a, ll m){ ll b=m, u=1, v=0; while(b){ll t = a/b; a-=t*b; swap(a,b); u-=t*v; swap(u,v);} u%=m; if(u<0)u+=m; return u;}
// ll minusmod(ll val, ll m){ ll res = val%m; if(res<0)res+=m; return res;}  // minus value mod of long long.
// ll modpow(ll x, ll n, ll mod){ ll res = 1; while(n > 0){ if(n & 1){ res *= x; res %= mod;} x *= x; x %= mod; n >>= 1;} return res;}
// ll comb(ll a, ll b, ll p){ if (b > a-b) return comb(a, a-b, p); ll c=1, d=1; for(ll i = 0; i < b; i++){c*=(a-i);d*=(b-i);c%=p;d%=p;} return c * modpow(d, p-2, p) % p;}

// int _modpow(int x, int n, int mod);  // TODO : comment in `int _modpow`.
// int _comb(int x, int b, int p);  // TODO : comment in `int _comb` and `int _modpow`.

int main()
{
  // write here.

  return 0;
}

/*
int _modpow(int x, int n, int mod){
  int res = 1;
  while(n > 0){
    if(n & 1){  // nが奇数のとき
      res *= x;
      res %= mod;
    }
    x *= x;
    x %= mod;
    n >>= 1;
  }
  return res;
}
*/

/*
int _comb(int a, int b, int p){
  if(b > a - b) return _comb(a, a-b, p);
  int c=1, d=1;
  for(int i = 0; i < b; i++){
    c *= (a-i);
    d *= (b-i);
    c %= p;
    d %= p;
  }
  return c * _modpow(d, p-2, p) % p;
}
*/
