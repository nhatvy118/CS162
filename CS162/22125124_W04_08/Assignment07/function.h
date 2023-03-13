#pragma once
#include<fstream>

using namespace std;
struct Node{
    int data;
    Node *pNext;
};
void inputLL(Node* &pHead);
void displayLL(Node* pHead);
void separate(Node* &list_1, Node*& list_2, Node* &pHead);
void deleteLL(Node*& pHead);