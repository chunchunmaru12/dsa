#include <stdio.h>
int main()
{
    int c, lb, ub, mid, n, key, array[100];

    printf("Enter number of elements\n");

    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter value to find\n");
    scanf("%d", &key);

    lb = 0;
    ub = n - 1;
    mid = (lb + ub) / 2;

    while (lb <= ub)
    {
        if (array[mid] < key)
            lb = mid + 1;
        else if (array[mid] == key)
        {
            printf("%d found at location %d.\n", key, mid + 1);
            break;
        }
        else
            ub = mid - 1;

        mid = (lb + ub) / 2;
    }
    if (lb > ub)
        printf("Not found! %d isn't present in the list.\n", key);

    return 0;
}