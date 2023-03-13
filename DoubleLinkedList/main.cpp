#include<iostream>

using namespace std;
struct DNode{
    int data;
    DNode* pPrev, *pNext;
};
void inputLL(DNode* &pHead){
    int temp;
    DNode* cur;
    cur = pHead;
    cout << "Input: ";
    cin >> temp;
    while (temp != 0){
        if (cur == NULL){
            pHead = new DNode;
            cur = pHead;
            cur -> pPrev = NULL;
        }
        cur -> data = temp;
        cin >> temp;
        if (temp != 0){
            cur -> pNext = new DNode;
            DNode* tmp = cur;
            cur = cur -> pNext;
            cur -> pPrev = tmp;
        }else{
            cur -> pNext = NULL;
        }
    }
}
 
void displayLL(DNode* pHead){
    cout << "Display: ";
    
    for (;pHead != nullptr; pHead=pHead->pNext){ 
        cout << pHead -> data << " ";
    } 
}
void insertAtBeginning(DNode* &pHead, int x){
    DNode* tmp = new DNode;
    tmp->data = x;
    tmp->pNext = pHead;
    tmp->pPrev = nullptr;
    if(pHead) pHead->pPrev = tmp;
    pHead = tmp;
}
void insertBeforeK(DNode* &pHead, int x, int k){
    if (pHead == NULL)
        return;
    if (pHead -> data == k){
        insertAtBeginning(pHead, x);
        return;
    }
    DNode* cur = pHead;
    for (; cur != nullptr; cur = cur->pNext){
        if (cur->data == k){
            DNode* newNode = new DNode;
            newNode->data = x;
            newNode->pPrev = cur -> pPrev;
            newNode->pNext = cur;
            cur -> pPrev -> pNext = newNode;
            cur -> pPrev = newNode;
            break;
        }
    }
}
void removeK(DNode* &pHead, int k){
    DNode* cur = pHead;
    for (; cur != nullptr; cur = cur->pNext){
        if (cur -> data == k){
            if(cur -> pNext) cur -> pNext -> pPrev = cur -> pPrev;
            if (cur -> pPrev) cur -> pPrev -> pNext = cur -> pNext;
            else pHead = cur -> pNext;
            delete cur;
            break;
        }
    }
}
void removeAllK(DNode* &pHead, int k){
    DNode* cur = pHead;
    for (; cur != nullptr;){
        if (cur -> data == k){
            if(cur -> pNext) cur -> pNext -> pPrev = cur -> pPrev;
            if (cur -> pPrev) cur -> pPrev -> pNext = cur -> pNext;
            else pHead = cur -> pNext;
            DNode *tmp = cur;
            cur = cur -> pNext;
            delete tmp;
        }else cur = cur -> pNext;
    }

}

int main(){
    DNode* pHead = NULL;
    int x,k;
    cin >> x >> k;
    inputLL(pHead);
    insertBeforeK(pHead,x,k);
    //insertAtBeginning(pHead,x);
    //removeAllK(pHead,k);
    displayLL(pHead);
    delete(pHead);

}