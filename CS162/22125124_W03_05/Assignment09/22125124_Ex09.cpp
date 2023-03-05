#include<iostream>
#include"function.h"

using namespace std;

int main(){
    int** a;
    int n;
    cin >> n;
    a = new int* [n + 1];
    for (int i = 1; i <= n; i++){
        a[i] = new int[8];
    }
    input(a,n);
    average_per_day(a,n);
    cout <<"the least amount of food during the week is " << least_eaten(a,n) << endl;
    cout <<"the geatest amount of food during the week is " << greatest_eaten(a,n) << endl;
    for (int i = 0; i <= n; i++)
        delete [] a[i];
    delete [] a;
    return 0;
}