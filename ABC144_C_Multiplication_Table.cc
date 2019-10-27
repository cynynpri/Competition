#include <bits/stdc++.h>

//using ll = long long;
//typedef long ll;

using namespace std;

int main()
{
    long long int N = 0;
    // cin >> N;
    cin >> N;
    long long int show = N-1, i = 0, j = 0, exlen = 0;
    
    for(long long int len = 1; len*len < N; len++){
        i = len;
        if(N % i == 0 && i != 1){
            j = (long long int)(N / i);
            if(j+i-2 < show){
                show = j+i-2;
            }
        }
        exlen = (len+1);
    }

    if(N % exlen == 0 && (long long int)(N / exlen) + exlen - 2 < show){
        show = (long long int)(N / exlen) + exlen - 2;
    }
    cout << show << endl;
    return 0;
}
