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
void mix2List(Node*& list_1,Node*& list_2,Node*& pHead){
    if (list_1 == NULL){
        pHead = list_2;
        return;
    }
    if (list_2 == NULL){
        pHead = list_1;
        return;
    }
    pHead = list_1;
    list_1 = list_1 -> pNext;
    int cnt = 2;
    Node* cur = pHead;
    while (list_1 != NULL && list_2 != NULL){
        //cout << cnt << endl;
        if (cnt % 2 == 0){
            cur -> pNext = list_2;
            cur = cur -> pNext;
            list_2 = list_2 -> pNext;
        }else{
            cur -> pNext = list_1;
            cur = cur -> pNext;
            list_1 = list_1 -> pNext;
        }
        cnt++;
    }
    if (list_1 != NULL){
        cur -> pNext = list_1;
        return;
    }
    if (list_2 != NULL){
        cur -> pNext = list_2;
        return;
    }
    cur -> pNext = nullptr;
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