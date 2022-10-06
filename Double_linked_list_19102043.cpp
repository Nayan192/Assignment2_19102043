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
void deleteFromDLL(Node* head,int x)
{
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
        return;
    }
    Node* previousNode=head;
    while(previousNode!=NULL && previousNode->next->data!=x){
        previousNode=previousNode->next;
    }
    if(previousNode==NULL) {
        cout<<"Node not present in the list"<<endl;
    }
    Node* curNode=previousNode->next;
    Node* nxtNode=curNode->next;
    previousNode->next=nxtNode;
    nxtNode->prev=previousNode;
    delete curNode;
}
