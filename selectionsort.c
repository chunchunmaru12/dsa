//selection sort
#include<stdio.h> 
void main()
{
    int n,a[20],i,min,j,temp;
    printf("enter the number of array to be sorted:\n");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
for(i=0;i<n-1;i++)
{
    min=i;
    for(j=i+1;j<n;j++){
        if(a[min]>a[j])
            min=j;
       }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;

}
printf("the sorted array after selection sort:\n");
 for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}