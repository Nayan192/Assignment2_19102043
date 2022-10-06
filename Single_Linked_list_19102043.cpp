#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
Node* insert(Node* head,int x)
{
    if(head==NULL)
    {
        head->next=new Node(x);
        return head;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(x);
    return head;
}