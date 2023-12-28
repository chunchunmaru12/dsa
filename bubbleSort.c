#include <stdio.h>

void main(){
    int a[50], num, i, j, temp;    

    printf("enter the number of array to be sorted: \n");

    scanf("%d", &num);    

    printf("enter the values : \n");
    for(i = 0; i < num; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < num - 1; i++){       
        for(j = 0; j < num - i - 1; j++){          
            if(a[j] > a[j + 1]){               
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Array after bubble sort: ");
    for(i = 0; i < num; i++){
        printf("%d \t", a[i]);
    }
}