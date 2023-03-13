#include "function.h"
#include<fstream>
using namespace std;

const int N = 1e6;
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
void remove_duplicated(Node* &pHead){
    bool check[2 * N + 3]; // +N to all number of array to check negative number;
    for (int i = 0; i <= 2 * N; i++)
        check[i] = false;
    Node* cur = pHead;
    check[cur->data + N] = true;
    while (cur -> pNext != nullptr){
        if (check[cur -> pNext -> data + N]){
            Node* tmp = cur -> pNext;
            cur -> pNext = cur -> pNext -> pNext;
            delete tmp;
        }else{
            check[cur -> pNext -> data + N] = true;
            cur = cur -> pNext;
        }
    }
}
void deleteLL(Node*& pHead){
    for (;pHead != nullptr;){
        Node *tmp = pHead -> pNext;
        delete pHead;
        pHead=tmp;
    }
}