#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N=0, M=0;
    scanf("%d %d", &N, &M);
    int l_max = 0;
    int r_min = 100000;
    for(int i = 0; i < M; i++){
        int arr[2] = {0};
        scanf("%d %d", &arr[0], &arr[1]);
        if(arr[0] > l_max){
            l_max = arr[0];
        }
        if(arr[1] < r_min){
            r_min = arr[1];
        }
    }

    int ans = 0;
    if(r_min < l_max){
        ans = 0;
    }else{
        ans = (r_min - l_max) + 1;
    }
    printf("%d\n", ans);
    return 0;
}
