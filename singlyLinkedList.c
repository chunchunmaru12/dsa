#include<stdio.h>
#include<stdlib.h>

void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
int main(){
    int choice;
    while(1){
        printf("\nPress:\n");
        printf("1: display\n");
        printf("2: insert at beginning\n");
        printf("3: insert at end\n");
        printf("4: insert at position\n");
        printf("5: exit\n");
        printf("6: delete at beginning\n");
        printf("7: delete at end\n");
        printf("8: delete at position\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                display();
                break;
            case 2:
                insert_begin();
                break;
            case 3:
                insert_end();
                break;
            case 4:
                insert_pos();
                break;
            case 5:
                exit(0);
            case 6:
                delete_begin();
                break;
            case 7:
                delete_end();
                break;
            case 8:
                delete_pos();
                break;
            default:
                printf("Enter a valid choice");
        }
    }
} 
void display(){
    struct node *temp;
    if(start==NULL){
        printf("Linked List is empty:\n");
    }
    else{
        temp = start;
        printf("\nThe elements are :\n");
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
void insert_begin(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&newnode->data);
    if(start==NULL){
        newnode->next=NULL;
    }else{
        newnode->next=start;
    }
    start=newnode;
}
void insert_end(){
    struct node *temp,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        temp=start;
        while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }   
}
void insert_pos(){
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    int p;
    printf("\nEnter the position:\n");
    scanf("%d",&p);
    printf("\nEnter the data to be inserted:\n");
    scanf("%d",&newnode->data);
    temp=start;
    for(int i=0;i<p-1;i++){
        temp=temp->next;
        if(temp->next==NULL){
            printf("\nPosition not found\n");
            return;
        }
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void delete_begin(){
    struct node *temp;
    if(start==NULL){
        printf("\nThe list is empty\n");
        return;
    }
    else{
        temp=start;
        start=start->next;
        free(temp);
    }
    printf("\nData deleted\n");
}
void delete_end(){
    struct node *temp,*hold;
    if(start==NULL){
        printf("\nThe list is empty\n");
    }
    else if(start->next==NULL){
        hold=start;
        start=NULL;
        free(hold);
    }else{
        hold=start;
        while(hold->next!=NULL){
            temp=hold;
            hold=hold->next;
        }
        temp->next=NULL;
        free(hold);
    }
    printf("\nData deleted\n");
}
void delete_pos(){
    struct node *temp, *hold;
    int p;
    int i=0;
    printf("\nEnter the position of data to be deleted\n");
    scanf("%d",&p);
    if(start==NULL){
        printf("\nThe list is empty\n");
    }
    else{
        if(p==0){
            hold=start;
            start=start->next;
            free(hold);
        }else{
            hold=start;
            while(i<p){
                temp=hold;
                hold=hold->next;
                if(hold==NULL){
                    printf("\nPosition not found\n");
                    return;
                }
                i++;
            }
            temp->next=hold->next;
            free(hold);
        }
    }
    printf("\nData deleted\n");
}