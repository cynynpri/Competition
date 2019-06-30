#include <iostream>
#include <cstdio>

#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define all(vec) (vec).begin(), (vec).end()

//typedef long long ll;

using namespace std;
// int gcd(int r, int l){return l?gcd(l, r%l):r;}
// int qp(int a,ll b){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}
// int qp(int a,ll b,int mo){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}

string encrypt(string key, string msg)
{
    constexpr int OFFSET = 33, ORDER = 94;
    int n = key.length();
    int m = msg.length();
    for (int i = 0; i < n; i++)
    {
        key[i] -= OFFSET;
    }
    for (int i = 0; i < m; i++)
    {
        msg[i] -= OFFSET;
    }
    for (int i = 0; i < m - n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //cout << "msg[" << i << "+" << j << "] : " << msg[i+j] << "i = " << i+1 << ", j = " << j+1 << endl;
            //cout << "key[" << j << "] : " << key[j];
            msg[i + j] = (msg[i + j] + key[j]) % ORDER;
            //cout << msg[i+j] << endl;
        }
    }
    for (int i = 0; i < m; i++)
        msg[i] += OFFSET;

    return msg;
}

string decrypt(string key, string enc)
{
    constexpr int enc_offset = 33, enc_order = 94;
    int m = enc.length();
    int n = key.length();
    for (int i = 0; i < m; i++)
    {
        enc[i] -= enc_offset;
    }
    for (int i = 0; i < n; i++)
    {
        key[i] -= enc_offset;
    }
    for (int i = 0; i < m - n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            enc[i + j] = (enc[i + j] + (enc_order - key[j])) % enc_order;
        }
    }
    for (int i = 0; i < m; i++)
    {
        enc[i] += enc_offset;
    }
    return enc;
}

int main()
{
    string key = "ICPC";
    string msg = "ACCEPTED(^^)";
    cout << "key = " << key << endl;
    cout << "msg = " << msg << endl;
    cout << "encrypted val = " << encrypt(key, msg) << endl;
    cout << "decrypted val = " << decrypt(key, encrypt(key, msg)) << endl;
    cout << endl;
    cout << endl;
    key = "GOOGLE";
    string enc = "0j:\\,ujj?FQiIVjm5HO}9.";
    cout << "key = " << key << endl;
    cout << "enc = " << enc << endl;
    cout << "decrypted val = " << decrypt(key, enc) << endl;
    return 0;
}
