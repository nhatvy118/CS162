#include<iostream>
#include"function.h"


using namespace std;


int main(){
    Node* pHead = NULL;
    int x;
    cout <<"input " ;
    cin >> x;
    inputLL(pHead);
    insert_X(pHead,x);
    displayLL(pHead);
    deleteLL(pHead);
    return 0;
}