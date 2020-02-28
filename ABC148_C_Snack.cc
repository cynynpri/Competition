#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef long long ll;

ll get_gcd(ll B, ll A){
    if(A == 0){
        return B;
    }else{
        return get_gcd(A, (B % A));
    }
}

ll get_lcm(ll B, ll A){
    return (B*A) / get_gcd(B, A);
}

int main()
{
    ll A = 0, B = 0;
    cin >> A >> B;
    if(A > B){
        ll t = A;
        A = B;
        B = t;
    }
    // 最小公倍数 LCM(B, A)を求める
    // 素因数分解できるならそっちが一番素朴
    cout << get_lcm(B, A) << endl;

    return 0;
}
