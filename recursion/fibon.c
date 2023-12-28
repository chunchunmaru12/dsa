#include <stdio.h>
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
void main(){
    int n,f;
    printf("Enter the nth terms for fibonacci operation: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=fibo(i);
        printf("%d\t",f);
    }

}