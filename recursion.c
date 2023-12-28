#include <stdio.h>
int fact(int n){
    if(n==1||n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int sum(int n){
    if(n==1){
        return 1;
    }else{
        return n+sum(n-1);
    }
}
int fibo(int n)
{
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
void towerOfHanoi(int n, char A, char C,char B){
    if(n==1){
        printf("Moved disk 1 from %c to %c",A,B);
        return;
    }
    towerOfHanoi(n-1,A,B,C);
    printf("\n");
    printf("Move disk %d from %c to %c",n,A,B);
    printf("\n");
    towerOfHanoi(n-1,C,A,B);
}
void main()
{
    int n,i,su,f;
    printf("Enter number: for factorial \n");
    scanf("%d",&n);
    i=fact(n);
    printf("The factorial is : %d",i);
    printf("\n");
    printf("Enter number: for sum \n");
    scanf("%d",&n);
    su=sum(n);
    printf("The sum is : %d",su);
    printf("\n");
    printf("Enter number: for fibonacii \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=fibo(i);
        printf("%d\t",f);
    }  
    printf("\n");
    printf("Enter number: for tower of hanoi\n");
    scanf("%d",&n);
    towerOfHanoi(n,'A','B','C');
}