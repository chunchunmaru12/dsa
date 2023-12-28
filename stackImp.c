#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3
int STACK[MAX];
int data;
int TOP=-1;
void push();
void pop();
void peak();
void display();

void push(){
    if(TOP==MAX-1){
        printf("\nThe stack is full.\n");
    }
    else{
        printf("\nenter the data to pushed:\n");
        scanf("%d",&data);
        STACK[++TOP]=data;   
    }
}
void pop(){
     if(TOP==-1){
        printf("\nThe stack is empty\n");
    }else{
        printf("\n%d is poped\n",STACK[TOP]);
        TOP--;
    }
}
void peak(){
    if(TOP==-1){
        printf("\nThe stack is empty\n");
    }
    else{
        printf("\nThe top data = %d\n",STACK[TOP]);
    }

}
void display(){
    printf("\nStack:\n");
    if(TOP==-1){
        printf("\nThe stack is empty\n");
    }
    else{
    for(int i=TOP;i>=0; i--){
        printf("%d\n", STACK[i]);
    }
    }
    printf("\n");

}
void main(){
    int choice;
    while(1){
    printf("\nEnter what operation u want to do: \n 1. push \n 2. pop \n 3. peak \n 4. display \n 5. exit\n ");
    printf(">>");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peak();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);  
    default:
    printf("\nenter valid choice\n");
        break;
   }
}
}