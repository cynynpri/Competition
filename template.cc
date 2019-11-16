#include <bits/stdc++.h>  // using gnu c++ compiler.
// #include <set>
// #include <map>
// #include <list>
// #include <queue>
// #include <stack>
// #include <cmath>
// #include <ctime>
// #include <cstdio>
// #include <vector>
// #include <string>
// #include <bitset>
// #include <cctype>
// #include <cstdlib>
// #include <cstring>
// #include <utility>
// #include <numeric>
// #include <complex>
// #include <sstream>
// #include <fstream>
// #include <iomanip>
// #include <cassert>
// #include <iostream>
// #include <iterator>
// #include <algorithm>

using namespace std;  // if U using this code in a project, U are fired.
using ll = long long;  // using `g++ hoge.cc -o main.out -Wall -Wextra -std=c++11 --exec-charset=cp932`
// typedef long long ll;  // needless -std settings.
using ull = unsigned long long;
// #define int long long  // u got a greatest power. rarely used.

// using veci = vector<int>;
using vecs = vector<signed>;
// using pri = pair<int, int>;
// using prs = pair<signed, signed>;

// @FYI
// @url : https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a

#define rep(i, n) for(signed i = 0, i##_len = (n); i < i##_len; ++i)
#define _rep(i, n) for(signed i = (n) - 1; i > 0; --i)
#define all(vec) (vec).begin(), (vec).end()
#define pb push_back

constexpr long long LINF{1001001001001001001ll};
constexpr signed INF{100000008};
constexpr signed MOD{(signed)1e9 + 7};
constexpr double EPS{1e-9};
const double PI{acos(-1)};

// @special functions
// @comment : `ll comb` is `ll modpow` required.

// signed gcd(signed r, signed l){return l?gcd(l, r%l):r;}
// ll modinv(ll a, ll m){ ll b=m, u=1ll, v=0ll; while(b){ll t = a/b; a-=t*b; swap(a,b); u-=t*v; swap(u,v);} u%=m; if(u<0)u+=m; return u;}
// ll minusmod(ll val, ll m){ ll res = val%m; if(res<0)res+=m; return res;}  // minus value mod of long long.
// ll modpow(ll x, ll n, ll mod){ll res = 1ll; while(n > 0ll){ if(n & 1ll){ res *= x; res %= mod;} x *= x; x %= mod; n >>= 1ll;} return res;}
// ll comb(ll a, ll b, ll p){ if (b > a-b) return comb(a, a-b, p); ll c=1ll, d=1ll; for(ll i=0ll; i<b; ++i){c*=(a-i); d*=(b-i); c%=p; d%=p;} return c * modpow(d, p-2ll, p)%p;}

// signed int_modpow(signed x, signed n, signed mod);  // TODO : comment in `signed _modpow`.
// signed int_comb(signed x, signed b, signed p);  // TODO : comment in `signed _comb` and `signed _modpow`.


void solve(void){
  // write your solution here.
}


signed main(void)
{
  solve();

  return 0;
}


// signed int_modpow(signed x,signed n,signed mod){ signed res=1; while(n>0){ if(n&1){ res*=x; res%=mod;} x*=x;x%=mod;n>>=1;} return res;}
// signed int_comb(signed a,signed b,signed p){ if(b>a-b)return int_comb(a, a-b, p);signed c=1,d=1;for(signed i=0;i<b;i++){ c*=(a-i);d*=(b-i);c%=p;d%=p;} return c*int_modpow(d,p-2,p)%p;}
