#include <stdio.h>
void towerOfHanoi(int n, char src/*source*/, char C/*temp*/,char dest/*destination*/){
    if(n==1){
        printf("Moved disk 1 from %c to %c",src,dest);
        return;
    }
    towerOfHanoi(n-1,src,dest,C);
    printf("\n");
    printf("Move disk %d from %c to %c",n,src,dest);
    printf("\n");
    towerOfHanoi(n-1,C,src,dest);
}
void main(){
    int n;
    printf("Enter the number of disc: ");
    scanf("%d",&n);
    towerOfHanoi(n,'A','B','C');
}