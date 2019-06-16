#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    a&=1;
    if(b&a){
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
    return 0;
}