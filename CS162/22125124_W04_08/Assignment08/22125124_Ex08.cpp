#include<iostream>
#include"function.h"


using namespace std;


int main(){
    Node* pHead = NULL, *list_1 = NULL, *list_2 = NULL;
    inputLL(list_1);
    inputLL(list_2);
    mix2List(list_1,list_2,pHead);
    displayLL(pHead);
    deleteLL(pHead);
    return 0;
}