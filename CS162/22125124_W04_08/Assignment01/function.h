#pragma once
#include<fstream>

using namespace std;
struct Node{
    int data;
    Node *pNext;
};
void inputLL(ifstream& fin, Node* &pHead);
void displayLL(ofstream& fout, Node* pHead);
void removeAllX(Node* &pHead, int x);
void deleteLL(Node* &pHead);