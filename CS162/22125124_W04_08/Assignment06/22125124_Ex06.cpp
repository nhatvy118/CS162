#include<iostream>
#include"function.h"


using namespace std;


int main(){
    Node* pHead = NULL;
    inputLL(pHead);
    list_sum(pHead);
    displayLL(pHead);
    deleteLL(pHead);
    return 0;
}