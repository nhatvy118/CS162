#pragma once
#include<fstream>

using namespace std;
struct Node{
    int data;
    Node *pNext;
};
void inputLL(Node* &pHead);
void displayLL(Node* pHead);
void insert_X(Node*& pHead, int x);
void deleteLL(Node*& pHead);