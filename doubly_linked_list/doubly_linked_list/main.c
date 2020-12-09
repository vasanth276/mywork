//
//  main.c
//  doubly_linked_list
//
//  Created by Vasanth Kumar on 08/12/20.
//

#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
void add_at_begin( ){
    struct node *ptr = NULL;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the node data :");
    scanf("%d",& ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
    }
}
void add_at_end( ){
    struct node *ptr = NULL;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the node data :");
    scanf("%d",& ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        struct node *temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
}
void add_at_after( ){
    struct node *ptr = NULL;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the node data :");
    scanf("%d",& ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    struct node *temp=head;
    int loc,i;
    printf("enter the location :");
    scanf("%d",& loc);
    for(i=1;i<loc;i++){
        temp=temp->next;
        if(temp==NULL){
            printf("can't be inserted\n");
            return;
        }
    }
    ptr->next=temp->next;
    ptr->prev=temp;
    temp->next->prev = ptr;
    temp->next=ptr;
}
void delete_at_begin( ){
    if(head==NULL){
        printf("empty list\n");
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        head=head->next;
        free(head->prev);
        head->prev=NULL;
    }
}
void delete_at_end( ){
    struct node *ptr=head;
    if(head==NULL){
        printf("empty list\n");
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        ptr->prev=NULL;
        free(ptr);
    }
}
void delete_at_specifiedloc( ){
    int i,loc;
    if(head==NULL){
        printf("empty list\n");
    }
    else{
        struct node *ptr=head;
        printf("enter the location :");
        scanf("%d",& loc);
        for(i=1;i<loc;i++){
            ptr=ptr->next;
        }
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        free(ptr);
    }
}
void display( ){
    if(head==NULL){
        printf("list is empty\n");
    }
    else{
        struct node *temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(int argc, const char * argv[]) {
    int opt=0;
    // insert code here...
    while(1){
        printf("DOUBLY LINKED LIST\n");
        printf("1.add_at_begin\n");
        printf("2.add_at_end\n");
        printf("3.add_at_after\n");
        printf("4.delete_at_begin\n");
        printf("5.delete_at_end\n");
        printf("6.delete_at_pos\n");
        printf("7.display\n");
        printf("enter the option :");
        scanf("%d",& opt);
        switch(opt){
            case 1:
                add_at_begin();
                break;
            case 2:
                add_at_end();
                break;
            case 3:
                add_at_after();
                break;
            case 4:
                delete_at_begin();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                delete_at_specifiedloc();
                break;
            case 7:
                display();
                break;
            default:
                printf("invalid option\n");
        }
    }
    return 0;
}

