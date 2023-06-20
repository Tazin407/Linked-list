#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_At_Tail(Node *&head, int v) // v ta notun node er value
{
    Node *newNode = new Node(v); // creating node
    if (head == NULL)
    {
        head = newNode; // *& dewar karone eta kora jacche.
                        // Naile dereference na kore evabe node change kora jay na

        return;
    }

    Node *tmp = head;
    while (tmp->next != 0)
    {
        tmp = tmp->next;
    }
    // ei loop sheshe tmp last node er next e thakbe
    tmp->next = newNode;
}
void print_linked_list(Node *head){
    cout<<"Your linked list "<<endl;
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL; // kichu dei nai dekhe first e null
    while(true){
        cout<< "Insert(i), Print(p) or Terminate(t)"<<endl;
        char c;
        cin>>c;
        if(c=='i'){
            cout<<"Insert your value ";
            int v;
            cin>>v;
            insert_At_Tail(head,v);
        }
        else if(c=='p'){
            print_linked_list(head);
        }
        else{
            break;
        }

    }

        return 0;
}
