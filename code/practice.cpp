#include <bits/stdc++.h>
using namespace std;


class node {
    public :
    int data ;
    node * next;

};



void printdata ( node * ptr){
    while ( ptr!= NULL){
        cout<<ptr->data<<endl;
        ptr= ptr->next;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

node * head ;
node * second;
node * third ;

head = new node();
second = new node();
third = new node();
head->data = 11;
head->next = second;

second->data = 11;
second->next = third;

third->data = 11;
third->next = NULL;

printdata(head);
    return 0;
}