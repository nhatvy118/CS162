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
void displayLL(Node* pHead){
    for (;pHead != nullptr; pHead = pHead->pNext){
        cout << pHead->data <<" ";
    }
    cout << 0;
}
void deleteNode(Node* & pre, Node*& cur){
    Node* tmp = cur;
    pre -> pNext = cur -> pNext;
    delete tmp;
}
void list_sum(Node*& pHead){
    Node* cur = pHead;
    while(cur -> pNext != nullptr){
        Node* newNode = new Node;
        newNode -> data = cur -> data + cur -> pNext -> data;
        deleteNode(cur,cur -> pNext);
        newNode -> pNext = cur -> pNext;
        cur -> pNext = newNode;
        cur = cur -> pNext;
    }
}
void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}