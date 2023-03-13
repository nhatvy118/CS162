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
void removeAllX(Node* &pHead, int x){
    if (pHead == nullptr) return;
    while (pHead != nullptr && pHead -> data == x){
        Node* tmp = pHead;
        pHead = pHead -> pNext;
        delete tmp;
    }

    if (pHead == nullptr) return;
    Node* cur = pHead;
    for (; cur -> pNext != nullptr;){
        if (cur -> pNext -> data == x){    
            Node* tmp = cur -> pNext;        
            cur -> pNext = cur -> pNext -> pNext;
            delete tmp;
        }else cur = cur -> pNext;
    }
}
void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}