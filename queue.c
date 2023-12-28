#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size];
int front=-1;
int rear=-1;
int data;
void enqueue(){
    if(rear==size-1){
        printf("the queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        printf("\nenter the data:");
        scanf("%d",&data);
        queue[rear]=data;
    }
    else{
        printf("\nenter the data:");
        scanf("%d",&data);
        queue[++rear]=data;
    }

}
void dequeue(){
    if(rear==-1){
        printf("the queue is empty\n");
    }
    else if(front==rear){
        printf("dequeued %d\n", queue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("dequeued %d \n",queue[front]);
        front++;
    }
}
void display(){
    printf("\nThe queue:\n");
    if(rear==-1){
        printf("the queue is empty\n");
    }else{
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }}
}

void main(){
    int choice;
    for(;;){
        printf("\nEnter the choice:\n1 for enqueue \n2 for dequeue\n3 for display\n4 for exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;           
            case 4:
                exit(0);
            default:
                printf("Invalid");
                break;

        }
    }

}