#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int A=0, B=0, C=0, X=0;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &X);
    int ans = 0;
    for(int ai = 0; ai < A+1; ai++){
        for(int bi = 0; bi < B+1; bi++){
            for(int ci = 0; ci < C+1; ci++){
                if(ai*500 + bi*100 + ci*50 == X){
                    ans++;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
