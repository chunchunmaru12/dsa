#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int searchTreeRecursive(struct node *node, int target) {
    if (node == NULL) {
        return 0;
    }
    if (node->data == target) {
        return 1;
    } else if (node->data > target) {
        return searchTreeRecursive(node->left, target);
    } else {
        return searchTreeRecursive(node->right, target);
    }
}

int main() {
    int key, result;
    struct node* root=newNode(8);
    root->left=newNode(6);
    root->right=newNode(9);
    root->left->left=newNode(4);
    root->left->right=newNode(7);
    root->left->left->left = newNode (3);
    root->left->left->right = newNode (5);
    printf("Enter data to be searched: ");
    scanf("%d", &key);
    result = searchTreeRecursive(root, key);
    if (result == 1) {
        printf("The target value %d was found in the binary tree\n", key);
    } else {
        printf("The target value %d was not found in the binary tree\n", key);
    }
    free(root->right->right);
    free(root->right->left);
    free(root->right);
    free(root->left->right);
    free(root->left->left);
    free(root->left);
    free(root);
    return 0;
}
