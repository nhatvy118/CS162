#include "function.h"
#include<fstream>
using namespace std;

void inputLL(ifstream& fin, Node* &pHead){
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
 void reverse(Node*& pHead) {
    Node* next = NULL;
    while (pHead != nullptr){
        Node* cur = pHead;
        pHead = pHead -> pNext;
        cur -> pNext = next;
        next = cur;
    }
    pHead = next;
}
void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}