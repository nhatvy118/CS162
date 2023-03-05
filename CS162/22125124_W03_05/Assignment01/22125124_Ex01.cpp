#include "function.h"
#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int *ptrNum = &x;
    cout << "enter the number ";
    addOne(ptrNum);
    cout <<"the number after incremented is " << x;
    //delete ptrNum;
    return 0;
}