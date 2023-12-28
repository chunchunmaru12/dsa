#include <stdio.h>
void main(){
    int a[20],loc=0,item,n,i,flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the data:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    while(loc<n){
        if(item==a[loc]){
            printf("Data found at %d ",loc+1);
            flag++;
        }
        loc++;
    }
    if(flag==0)
        printf("Data is not found"); 
}