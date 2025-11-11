#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if(rear == MAX - 1)
        printf("Queue is Full\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = x;
        printf("%d enqueued\n", x);
    }
}

void dequeue() {
    if(front == -1 || front > rear)
        printf("Queue is Empty\n");
    else {
        printf("%d dequeued\n", queue[front++]);
        if(front > rear) front = rear = -1;
    }
}

void isEmpty() {
    if(front == -1) printf("Queue is Empty\n");
    else printf("Queue is not Empty\n");
}

void isFull() {
    if(rear == MAX - 1) printf("Queue is Full\n");
    else printf("Queue is not Full\n");
}

void peek() {
    if(front == -1) printf("Queue is Empty\n");
    else printf("Front element: %d\n", queue[front]);
}

void display() {
    if(front == -1) printf("Queue is Empty\n");
    else {
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice, val;
    while(1) {
        printf("\n1.Enqueue\n2.Dequeue\n3.isEmpty\n4.isFull\n5.Display\n6.Peek\n7.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                isFull();
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
