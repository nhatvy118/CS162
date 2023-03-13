#include<iostream>
#include"function.h"


using namespace std;


int main(){
    Node* pHead = NULL, *list_1 = NULL, *list_2 = NULL;
    inputLL(pHead);
    separate(list_1,list_2,pHead);
    displayLL(list_1);
    cout << endl;
    displayLL(list_2);
    deleteLL(list_1);
    deleteLL(list_2);
    return 0;
}