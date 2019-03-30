#include<stdio.h>

struct Node{
int data;
struct Node *next;
}a,b,c;

void printList(struct Node *n) 
{ 
  while (n != NULL) 
  { 
     printf(" %d ", n->data); 
     n = n->next; 
  } 
} 
int main(){

 struct Node* a; 
  struct Node* b; 
  struct Node* c ; 
a->data =10;
a->next = &b;
b->data =10;
b->next = &c;
c->data =10;
c->next=NULL;

printList(a) ;
	
}