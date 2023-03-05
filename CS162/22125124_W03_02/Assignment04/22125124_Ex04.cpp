//22125124
#include"function.h"
#include<iostream>

using namespace std;

const int N = 1e6 + 1;
int main(){
    int n;
    cin >> n;
    int *cnt = new int[N];
    int *a = new int[n + 1];
    int m = count(cnt,a,n);
    display(cnt,m);
    return 0;
}