#include "function.h"
#include<iostream>

using namespace std;
const int N = 1e6 + 1;
int count(int* cnt, int* a, int n){
    int Max = 0;
    for (int i = 0; i < N; i++) cnt[i] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        if (cnt[a[i]] > Max) Max = cnt[a[i]];
    }
    return Max;
}
void display(int* cnt, int m){
    if (m == 1){
        cout << -1;
        return;
    }
    cout <<"the value of number has greatest frequency ";
    for (int i = 0; i < N ; i++){
        if (cnt[i] == m) cout << i << " ";
    }
}