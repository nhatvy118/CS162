#include "function.h"
#include<iostream>

using namespace std;

void input(int* a, int n){
    for (int  i = 1; i <= n; i++)
        cin >> *(a + i);
}
double median(int *a, int n){
    if (n % 2 == 0){
        return ((*(a + n / 2) + *(a + n / 2 + 1))/2.0);
    }else{
        return *(a + n / 2 + 1) * 1.0;
    }
}