#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N=0;
    cin >> N;
    vector<int> d_vec = vector<int>();
    for(int i = 0; i < N; i++){
        int d = 0;
        cin >> d;
        d_vec.push_back(d);
    }
    sort(d_vec.begin(), d_vec.end());

    int med = (d_vec.size() / 2);  // `0 1 2 2 3 4` とかだと大きい方の2を取る
    int med_d = d_vec[med];
    // printf("med = %d, med_d = %d\n", med, med_d);
    int pre_med_d = d_vec[med - 1];
    int k = 0;
    if(pre_med_d < med_d){
        k = med_d - pre_med_d;
    }
    printf("%d\n", k);
    return 0;
}