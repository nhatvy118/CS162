#include "function.h"
#include<iostream>

using namespace std;
const int N = 1e6 + 1;
void sol(int* cnt, int n){
    int a;
    int Max = 0;
    for (int i = 1; i <= n; i++){
        cin >> a;
        cnt[a]++;
        if (cnt[a] > Max) Max = cnt[a];
    }
    cout <<"the value of number has greatest frequency ";
    for (int i = 1; i < N ; i++){
        if (cnt[i] == Max) cout << i << " ";
    }
}