#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X = 0;
    cin >> X;
    // ただの総当たり
    for(int a = 0; 100 * a <= X; a++){
        for(int b = 0; 101 * b + 100 * a <= X; b++){
            for(int c = 0; 102 * c + 101 * b + 100 * a <= X; c++){
                for(int d = 0; 103 * d + 102 * c + 101 * b + 100 * a <= X; d++){
                    for(int e = 0; 104 * e + 103 * d + 102 * c + 101 * b + 100 * a <= X; e++){
                        for(int f = 0; 105 * f + 104 *e + 103 * d + 102 * c + 101 * b + 100 * a <= X; f++){
                            if(105*f+104*e+103*d+102*c+101*b+100*a == X){
                                cout << 1 << endl;
                                return 0;
                            }
                        }
                        if(104*e+103*d+102*c+101*b+100*a == X){
                            cout << 1 << endl;
                            return 0;
                        }
                    }
                    if(103*d + 102*c + 101*b + 100*a == X){
                        cout << 1 << endl;
                        return 0;
                    }
                }
                if(102*c + 101*b + 100*a == X){
                    cout << 1 << endl;
                    return 0;
                }
            }
            if(101*b + 100*a == X){
                cout << 1 << endl;
                return 0;
            }
        }
        if(100*a == X){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;

    return 0;
}