#pragma once
#include<fstream>

using namespace std;
struct Node{
    int data;
    Node *pNext;
};
void inputLL(ifstream& fin, Node* &pHead);
void displayLL(ofstream& fout, Node* pHead);
void remove_duplicated(Node* &pHead);
void deleteLL(Node*& pHead);