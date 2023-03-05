#include "function.h"
#include<iostream>

using namespace std;

void input(int** a, int n){
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 7; j++){
            cin >> a[i][j];
        }
}
void average_per_day(int** a,int n){
    for (int i = 1; i <= 7; i++){
        int t = 0;
        for (int j = 1; j <= n; j++){
            t += a[j][i];
        }
        cout << "the average amount of food of the whole family day "<< i <<": "<< t / 7.0 << endl;
    }
}
int least_eaten(int** a, int n){
    int ans;
    int t = 0;
    for (int i = 1; i <= 7; i++)
        t += a[1][i];
    ans = t;
    for (int i = 2; i <= n; i++){
        t = 0;
        for (int j = 1; j <= 7; j++)
            t += a[i][j];
        if (t < ans){
            ans = t;
        }
    }
    return ans;
}
int greatest_eaten(int** a, int n){
    int ans;
    int t = 0;
    for (int i = 1; i <= 7; i++)
        t += a[1][i];
    ans = t;
    for (int i = 2; i <= n; i++){
        t = 0;
        for (int j = 1; j <= 7; j++)
            t += a[i][j];
        if (t > ans){
            ans = t;
        }
    }
    return ans;
}