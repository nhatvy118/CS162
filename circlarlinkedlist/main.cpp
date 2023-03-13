#include <iostream>
 
using namespace std;

struct Node{
    int data;
    Node* pNext;
};
void inputLL(Node* &pHead){
    int temp;
    Node* cur;
    cur = pHead;
    cout << "Input: ";
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
            cur -> pNext = pHead;
        }
    }
}
 
void displayLL(Node* pHead){
    cout << "Display: ";
    Node* cur = pHead;
    while(pHead -> pNext != cur){ 
        cout << pHead -> data << " ";
        pHead = pHead -> pNext;
    } 
    cout << pHead -> data;
}
 
void deleteLL(Node* &pHead){
    if (pHead == nullptr) return;
    cout << pHead -> data << " ";
    Node* cur = pHead;
    while (cur -> pNext != cur){
        Node* tmp = cur -> pNext;
        cout << tmp -> data << " ";
        cur -> pNext = cur -> pNext -> pNext;
        delete tmp;
    }
    delete pHead;
    pHead = nullptr;
}
Node* findX(Node* pHead, int x){
    Node* cur = pHead;
    while(pHead != nullptr){
        if (pHead -> data == x){
            return pHead;
        }
        if (pHead -> pNext == cur) break;
        pHead = pHead -> pNext;
    }
    return nullptr;
}
void remove1st(Node*& pHead, int x){
    if (pHead == nullptr) return;
    if (pHead -> data == x){
        Node* tmp = pHead;
        Node* cur = pHead;
        while (cur -> pNext != pHead){
            cur = cur -> pNext;
        }
        if (pHead == cur){
            delete pHead;
            pHead = nullptr;
            return;
        }
        cur -> pNext = pHead -> pNext;
        pHead = pHead -> pNext;
        delete tmp;
        return;
    }
    Node* cur = pHead;
    while (true){
        if (cur -> pNext -> data == x){
            Node* tmp = cur -> pNext;
            cur -> pNext = cur -> pNext -> pNext;
            delete tmp;
            return;
        }
        if (cur -> pNext == pHead) break;
        cur = cur -> pNext;
    }

}
void removeAllX(Node* &pFirst, int x){
    if(!pFirst) return;
    Node* cur = pFirst;
    while(cur->pNext != pFirst) {
        if(cur->pNext->data == x) {
            Node* tmp = cur->pNext->pNext;
            delete cur->pNext;
            cur->pNext = tmp;
        }
        else cur = cur->pNext;
    }
    if(cur->pNext->data == x) {
        Node* tmp = cur->pNext->pNext;
        if(cur->pNext == pFirst) pFirst = tmp;
        if(pFirst->pNext == pFirst)
            pFirst = nullptr;
        delete cur->pNext;
        cur->pNext = tmp;
    }
    
}

void removeBaseOnK(Node*& pHead, int k){
    int t = 0;
    if (k == 1){
        deleteLL(pHead);
        return;
    }
    Node* cur = pHead;
    t = 2;
    while (cur != nullptr){
        //cout << t <<" " << cur -> pNext -> data << endl;
        if (t == k) {
            t = 1;
            Node* tmp = cur -> pNext;
            cout << tmp -> data << endl;
            cur -> pNext = cur -> pNext -> pNext;
            if (cur -> pNext == cur){
                delete tmp;
                pHead = nullptr;
                return;
            }
            delete tmp;
        }else{
            t++;
            if (cur -> pNext == cur){
                cout << cur -> data << endl;
                delete cur;
                pHead = nullptr;
                return;
            }
            cur = cur -> pNext;
        }
    }
}
int main(){
    Node *pHead = NULL;
    int x;
    cin >> x;
    inputLL(pHead);
    //cout << findX(pHead, x) << endl;
    //remove1st(pHead,x);
    removeBaseOnK(pHead,x);
    displayLL(pHead);
    deleteLL(pHead);
    return 0;
}