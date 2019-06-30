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
// typedef long long int;  // u got a greatest power. rarely using.

// @FYI
// @url : https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a

#define rep(i, n) for(signed i = 0, i##_len = (n); i < i##_len; ++i)
#define _rep(i, n) for(signed i = (n) - 1; i > 0; --i)
#define all(vec) (vec).begin(), (vec).end()

// @special functions
// @comment : `ll comb` is `ll modpow` required.

// signed gcd(signed r, signed l){return l?gcd(l, r%l):r;}
// ll modinv(ll a, ll m){ ll b=m, u=1ll, v=0ll; while(b){ll t = a/b; a-=t*b; swap(a,b); u-=t*v; swap(u,v);} u%=m; if(u<0)u+=m; return u;}
// ll minusmod(ll val, ll m){ ll res = val%m; if(res<0)res+=m; return res;}  // minus value mod of long long.
// ll modpow(ll x, ll n, ll mod){ll res = 1ll; while(n > 0ll){ if(n & 1ll){ res *= x; res %= mod;} x *= x; x %= mod; n >>= 1ll;} return res;}
// ll comb(ll a, ll b, ll p){ if (b > a-b) return comb(a, a-b, p); ll c=1ll, d=1ll; for(ll i=0ll; i<b; ++i){c*=(a-i); d*=(b-i); c%=p; d%=p;} return c * modpow(d, p-2ll, p)%p;}

// signed _modpow(signed x, signed n, signed mod);  // TODO : comment in `signed _modpow`.
// signed _comb(signed x, signed b, signed p);  // TODO : comment in `signed _comb` and `signed _modpow`.

signed main()
{
  // write here.

  return 0;
}

/*
signed _modpow(signed x, signed n, signed mod){
  signed res = 1;
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
signed _comb(signed a, signed b, signed p){
  if(b > a - b) return _comb(a, a-b, p);
  signed c=1, d=1;
  for(signed i = 0; i < b; i++){
    c *= (a-i);
    d *= (b-i);
    c %= p;
    d %= p;
  }
  return c * _modpow(d, p-2, p) % p;
}
*/
