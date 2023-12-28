#include<stdio.h> 
int main()
{
    int a[20],i,temp,j,n;
    printf("enter the number of array:\n");
    scanf("%d",&n);
    printf("enter the array to be sort:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array after insertion sort :\n");
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}