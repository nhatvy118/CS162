#include <iostream>
#include "function.h"
#include<string.h>

using namespace std;

int main(){
    char* cstr = new char[200];
    cin >> cstr;
    if (isPalindrome(cstr)){
        cout <<"YES";
    }else{
        cout <<"NO";
    }
    delete [] cstr;
    return 0;
}