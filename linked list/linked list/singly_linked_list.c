//
//  main.c
//  linked list
//
//  Created by Vasanth Kumar on 02/12/20.
//

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *root=NULL;
void add_at_end( ){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of the node:");
    scanf("%d",& temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        struct node *p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
}
void display( ){
    struct node *temp;
    temp=root;
    if(temp==NULL){
        printf("there are no elements in linked-list\n");
    }
    else{
        printf("elements of the linked-list are :\n");
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }
}
void add_at_begin( ){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of the node:");
    scanf("%d",& temp->data);
    temp->link=NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
}
int length( ){
    struct node *temp;
    temp=root;
    int len=0;
    while(temp!=NULL){
        temp=temp->link;
        len++;
    }
    return len;
}
void add_at_after( ){
    int loc,i=1;
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of the node:");
    scanf("%d",& temp->data);
    temp->link=NULL;
    printf("enter the location after which the node to be added:");
    scanf("%d",& loc);
    if(loc>length()){
        printf("invalid location\n");
    }
    else{
        struct node *p;
        p=root;
        while(i<loc){
            p=p->link;
            i++;
        }
        temp->link=p->link;
        p->link=temp;
    }
}
void delete_at_end( ){
    struct node *q;
    struct node *p=root;
    int i=1;
    if(p==NULL){
        root=p->link;
    }
    else{
        while(i<(length()-1)){
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=NULL;
        free(q);
    }
}
void delete_at_begin( ){
    struct node *p=root;
    root=p->link;
    p->link=NULL;
    free(p);
}
void delete_at_after( ){
    int i=1,loc;
    printf("enter the location after which to be deleted:");
    scanf("%d",& loc);
    if(loc>length()){
        printf("invalid location\n");
    }
    else{
        struct node *p,*q;
        p=root;
        while(i<(loc-1)){
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int opt,len;
    while(1){
        printf("1.add_at_end\n");
        printf("2.display\n");
        printf("enter the option:");
        scanf("%d",& opt);
        switch(opt){
            case 1 :
                add_at_end();
                break;
            case 2 :
                display();
                break;
            case 3 :
                add_at_begin();
                break;
            case 4 :
                len=length();
                printf("length of the linked-list is:%d\n",len);
                break;
            case 5 :
                add_at_after();
                break;
            case 6 :
                delete_at_end();
                break;
            case 7 :
                delete_at_begin();
                break;
            case 8 :
                delete_at_after();
                break;
            default :
                printf("invalid option\n");
        }
    }
    return 0;
}
