#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N = 0;
    cin >> N;
    string name = "";
    int point = 0;

    vector<string> names = vector<string>();
    vector<int> points = vector<int>();
    vector<int> ranks = vector<int>();
    for(int i = 0; i < N; i++){
        cin >> name >> point;
        ranks.push_back(1);
        names.push_back(name);
        points.push_back(int(point));
        if(i == 0){
            continue;
        }else if(i == 1){
            if(name < names[0]){
                ranks[0]++;
            }else if(name == names[0] && point > points[0]){
                ranks[0]++;
            }else{
                ranks[1]++;
            }
        }else{
            for(int j = 0; j < i; j++){
                if(name < names[j]){
                    ranks[j]++;
                }else if(name == names[j] && point > points[j]){
                    ranks[j]++;
                }else{
                    ranks[i]++;
                }
            }
        }
    }
    vector<int> ans = ranks;
    for(int i = 0;i < N; i++){
        for(int j = 0;j < N; j++){
            //printf("%d\n", ranks[j]);
            if(i+1 == ranks[j]){
                ans[i] = j+1;
            }
        }
    }
    for(int i : ans){
        printf("%d\n", i);
    }
    return 0;
}
