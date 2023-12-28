#include<stdio.h>
void quicksort(int number[25],int up, int down){
int i,j,key,temp;
if(up<down){
    key=up;
    i=up;
    j=down;
    while(i<j){
        while (number[i]<=number[key]&&i<down)
            i++;
        while(number[j]>number[key])
            j--;
        if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
        }
    }
    temp=number[key];
    number[key]=number[j];
    number[j]=temp;
    quicksort(number,up,j-1);
    quicksort(number,j+1,down);

}
}
int main(){
int i, count, number[25];
printf("How many elements are you going to enter?:");
scanf("%d",&count);
printf("enter %d elements:", count);
for(i=0;i<count;i++)
    scanf("%d",&number[i]);
quicksort(number,0,count-1);
printf("Order of sorted elements:");
for(i=0;i<count;i++)
    printf("%d\t",number[i]);
}