#include "function.h"
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int* a = new int[n + 1];
    input(a,n);
    cout << "the median of the list is " << median(a,n);
    return 0;
}