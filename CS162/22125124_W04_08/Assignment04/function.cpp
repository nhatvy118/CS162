#include "function.h"
#include<fstream>
using namespace std;

void inputLL(ifstream& fin, Node*& pHead){
    int temp;
    Node* cur;
    cur = pHead;
    fin >> temp;
    while (temp != 0){
        if (cur == NULL){
            pHead = new Node;
            cur = pHead;
        }
        cur -> data = temp;
        fin >> temp;
        if (temp != 0){
            cur -> pNext = new Node;
            cur = cur -> pNext;
        }else{
            cur -> pNext = NULL;
        }
    }
}
void displayLL(ofstream& fout, Node* pHead){
    for (;pHead != nullptr; pHead = pHead->pNext){
        fout << pHead->data <<" ";
    }
    fout << 0;
}
void insertAtBeginning(Node*& pHead, int x){
    Node* newNode = new Node;
    newNode -> data = x;
    newNode -> pNext = pHead;
    pHead = newNode;
}
void insert_even_number(Node*& pHead){
    int tmp = 2;
    if (pHead == nullptr) return;
    insertAtBeginning(pHead,tmp);
    Node* cur = pHead -> pNext;
    while (cur -> pNext != nullptr){
        tmp += 2;
        Node* newNode = new Node;
        newNode -> data = tmp;
        newNode -> pNext = cur -> pNext;
        cur -> pNext = newNode;
        cur = cur -> pNext -> pNext;
    }
}


void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}