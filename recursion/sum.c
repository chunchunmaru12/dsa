#include <stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }else{
        return n+sum(n-1);
    }
}
void main(){
    int n,s;
    printf("Enter the nth number for sum: ");
    scanf("%d",&n);
    s=sum(n);
    printf("\nThe sum is: %d",s);
}