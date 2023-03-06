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
            cur -> pNext = NULL;
        }
    }
}
 
void displayLL(Node* pHead){
    cout << "Display: ";
    
    for (;pHead != nullptr; pHead=pHead->pNext){ 
        cout << pHead -> data << " ";
    } 
}
 
void deleteLL(Node* &pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}
void InsertAtBegin(Node* &pHead, int x){
    Node *newNode = new Node;
    newNode -> data = x;
    newNode -> pNext = pHead;
    pHead = newNode;
}
void InsertAfterK(Node* pHead, int x, int k){
    while(pHead != nullptr && pHead -> data != k){
        pHead = pHead -> pNext;
    }
    if (pHead == nullptr)
        return;
    Node *newNode = new Node;
    newNode -> data = x;
    newNode -> pNext = pHead -> pNext;
    pHead -> pNext = newNode;
}
void InsertBeforeK(Node* &pHead, int x, int k){
    Node* cur = pHead;
    if (cur != NULL && cur -> data == k){
        InsertAtBegin(pHead,x);
        return;
    }
    while(cur -> pNext != nullptr){
        Node* tmp = cur -> pNext;
        if (tmp -> data == k && tmp != nullptr) break;
        else cur = cur -> pNext;
    }
    if (cur -> pNext == nullptr)
        return;
    Node *newNode = new Node;
    newNode -> data = x;
    newNode -> pNext = cur -> pNext;
    cur -> pNext = newNode;
}
void DeleteAtBegin(Node* &pHead){
    Node* cur = pHead;
    if (pHead) pHead = pHead->pNext;
    delete cur;
}
void DeleteANode(Node* &pHead, int k){
    if (pHead != NULL && pHead -> data == k){
        DeleteAtBegin(pHead);
        return;
    }
    Node* cur = nullptr;
    Node* tmp = nullptr;
    while(cur != nullptr && cur -> data != k){
        tmp = cur;
        cur = cur -> pNext;
    }
    if (cur == nullptr) return;
    tmp -> pNext = cur -> pNext;
    delete cur;
    return;
}
void DeleteAllK(Node* &pHead,int k){
    while (pHead != NULL && pHead -> data == k){
        DeleteAtBegin(pHead);
    }    
    if (pHead == NULL) return;
    for (Node* cur = pHead; cur -> pNext != nullptr;){
        if (cur -> pNext -> data == k){
            Node* tmp = cur -> pNext;
            cur -> pNext = cur -> pNext -> pNext;
            delete tmp;
        }else{
            cur = cur -> pNext;
        }
    }
}
void InsertOrderList(Node*& pHead, int x){
    if (pHead == NULL){
         pHead = new Node;
         pHead -> data = x;
         pHead -> pNext = NULL;
         return;
     }
    if (pHead != NULL && pHead -> data >= x){
        InsertAtBegin(pHead,x);
        return;
    }
    Node* cur = pHead;
    while(cur -> pNext != nullptr){
        Node* tmp = cur -> pNext;
        if (tmp -> data > x && tmp != nullptr) break;
        else cur = cur -> pNext;
    }
    if (cur -> pNext == nullptr){
        Node *newNode = new Node;
        newNode -> data = x;
        cur -> pNext = newNode;
        return;
    }
    Node *newNode = new Node;
    newNode -> data = x;
    newNode -> pNext = cur -> pNext;
    cur -> pNext = newNode;
    return;
}
void MergeOrderedList(Node* &pHA, Node* &pHB, Node* &pHC){
    Node* curA = pHA;
    Node* curB = pHB;
    pHC = new Node;
    Node* curC = pHC;
    while (curA != NULL && curB != NULL){
        if (curA -> data < curB -> data){
            curC -> data = curA -> data;
            curC -> pNext = new Node;
            curC = curC -> pNext;
            Node* tmp = curA;
            curA = curA -> pNext;
            delete tmp;
        }else{
            curC -> data = curB -> data;
            curC -> pNext = new Node;
            curC = curC -> pNext;
            Node* tmp = curB;
            curB = curB -> pNext;
            delete tmp;
        } 
    }
    if (curA != NULL){
        curC -> data = curA -> data;
        curC -> pNext = curA -> pNext;
        curA = nullptr;
        
    }else{
        curC -> data = curA -> data;
        curC -> pNext = curA -> pNext;
        curA = nullptr;
    }
}
int main(){
    Node *pHead = NULL;
    Node *pHA = NULL;
    Node *pHB = NULL;
    Node *pHC = NULL;
    inputLL(pHA);
    inputLL(pHB);
    MergeOrderedList(pHA,pHB,pHC);
    displayLL(pHC);
    deleteLL(pHC);
    //inputLL(pHead);
    //InsertOrderList(pHead,x);
    //displayLL(pHead);
    //deleteLL(pHead);
}