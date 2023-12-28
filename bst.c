#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data){
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
void printInorder(struct node *node,int key){
    if(node==NULL)
        return;
    printInorder(node->left,key);
    printInorder(node->right,key);
    if(node->data==key){
        printf("Found key");
        return;
    }
}
int main(){
    int key;
    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    printf("Enter data to be searched: ");
    scanf("%d",&key);
    printInorder(root,key);

    getchar();
    return 1;
}