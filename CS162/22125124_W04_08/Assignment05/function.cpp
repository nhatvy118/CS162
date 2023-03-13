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
void insert_X(Node*& pHead, int x){
    if (pHead == nullptr){
        pHead = new Node;
        pHead -> data = x;
        pHead -> pNext = nullptr;
        return;
    }
    if (pHead -> data >= x){
        Node* newNode = new Node;
        newNode -> data = x;
        newNode -> pNext = pHead;
        pHead = newNode;
        return;
    }
    Node* cur = pHead;
    while(cur -> pNext != nullptr){
        if (cur -> pNext -> data >= x){
            Node* newNode = new Node;
            newNode -> data = x;
            newNode -> pNext = cur -> pNext;
            cur -> pNext = newNode;
            return;
        }
        cur = cur -> pNext;
    }
    Node* newNode = new Node;
    newNode -> data = x;
    newNode -> pNext = cur -> pNext;
    cur -> pNext = newNode;
}
void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}