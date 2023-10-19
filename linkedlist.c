#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void printlinkedlist(struct node *p){
   while(p!=NULL){
    printf("%d \n",p->data);
    p=p->next;

   }

}

int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof (struct node));

    one-> data=2;
    two->data=5;
    three->data=8;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    printlinkedlist(head);
}
