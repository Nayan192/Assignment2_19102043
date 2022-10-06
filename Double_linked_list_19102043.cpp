#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
};
Node* deleteFromDLL(Node* head,int x)
{
    if(head==NULL)
    {
        return head;
    }
    Node* previousNode=head;
    while(previousNode->next!=NULL && previousNode->next->data!=x){
        previousNode=previousNode->next;
    }
    Node* curNode=previousNode->next;
    Node* nxtNode=curNode->next;
    previousNode->next=nxtNode;
    nxtNode->prev=previousNode;
    delete curNode;
    return head;
}