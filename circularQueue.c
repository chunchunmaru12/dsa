#include <stdio.h>
#include <stdlib.h>
#define size 3
int queue[size];
int front = -1;
int rear = -1;
int data;
// Lab 3 circular queue implementation
void enqueue()
{
    if ((front == 0 && rear == size - 1) || front == rear + 1)
    {
        printf("queue is Full\n");
    }
    else
    {
        if (rear == -1 && front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % size;
        printf("Enter data to be entered\n");
        scanf("%d", &data);
        queue[rear] = data;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("The circular queue is empty\n");
    }
    else
    {
        printf("Dequeued %d\n", queue[front]);
    }
    if (rear == front)
    {
        rear = -1;
        front = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}
void display()
{
    printf("\nCircular Queue:\n");
    if (front == -1 && rear == -1)
    {
        printf("\nEmpty Queue\n");
    }
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    if (front > rear)
    {
        for (int i = front; i <= size - 1; i++)
        {
            printf("%d ", queue[i]);
        }

        for (int i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
void main()
{
    while (1)
    {
        printf("\n1 for enqueue\n2 for dequeue\n3 for display\n4 for exit");
        int c;
        printf("\nEnter choice: \n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong input.\n");
        }
    }
}