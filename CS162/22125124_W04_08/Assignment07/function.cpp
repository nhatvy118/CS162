#include "function.h"
#include<iostream>
using namespace std;

void inputLL(Node* &pHead){
    int temp;
    Node* cur;
    cur = pHead;
    cin >> temp;
    while (temp != 0){
        if (cur == NULL){
            pHead = new Node;
            cur = pHead;
        }
        cur -> data = temp;
        cin >> temp;
        if (temp != 0){
            cur -> pNext = new Node;
            cur = cur -> pNext;
        }else{
            cur -> pNext = NULL;
        }
    }
}
void separate(Node* &list_1, Node*& list_2, Node* &pHead){
    if (pHead == nullptr) return;
    list_1 = pHead;
    if (pHead -> pNext != nullptr) list_2 = pHead -> pNext;
    else{
        list_1 -> pNext = NULL;
        return;    
    }
    Node* tmp1 = list_1;
    Node* tmp2 = list_2;
    while (tmp2 -> pNext != NULL){
        tmp1 -> pNext = tmp2 -> pNext; 
        tmp1 = tmp1 -> pNext;
        if (tmp1 -> pNext != NULL){
            tmp2 -> pNext = tmp1 -> pNext; 
            tmp2 = tmp2 -> pNext;
        }else break;
    }
    tmp1 -> pNext = NULL;
    tmp2 -> pNext = NULL;
}
void displayLL(Node* pHead){
    for (;pHead != nullptr; pHead = pHead->pNext){
        cout << pHead->data <<" ";
    }
    cout << 0;
}
void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}