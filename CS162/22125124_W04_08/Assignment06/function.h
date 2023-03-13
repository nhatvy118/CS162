#pragma once
#include<fstream>

using namespace std;
struct Node{
    int data;
    Node *pNext;
};
void inputLL(Node* &pHead);
void displayLL(Node* pHead);
void deleteNode(Node* & pre, Node*& cur);
void list_sum(Node*& pHead);
void deleteLL(Node*& pHead);