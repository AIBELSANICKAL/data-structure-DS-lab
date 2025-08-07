#include <stdio.h>

int main() {
    int a[10];
    int i, m;
    int front = -1, rear = -1;
    int item, choice;

    printf("Enter the number of elements (max value=10): ");
    scanf("%d", &m);

    if (m <= 0 || m > 10) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    if (m > 0) {
        front = 0;
        rear = m - 1;
    }

    while (1) {
        printf("\nMenu");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {  // Enqueue
            if ((rear + 1) % 10 == front) {
                printf("Queue is full, cannot enqueue.\n");
            } else {
                printf("Enter the item to enqueue: ");
                scanf("%d", &item);
                rear = (rear + 1) % 10;
                a[rear] = item;
                if (front == -1) {
                    front = 0;
                }
                printf("Item enqueued: %d\n", item);
            }
        } else if (choice == 2) {  // Dequeue
            if (front == -1) {
                printf("Queue is empty, cannot dequeue.\n");
            } else {
                item = a[front];
                printf("Item dequeued: %d\n", item);
                if (front == rear) {
                    front = rear = -1;
                } else {
                    front = (front + 1) % 10;
                }
            }
        } else if (choice == 3) {  // Display
            if (front == -1) {
                printf("Queue is empty.\n");
            } else {
                printf("Queue elements: ");
                i = front;
                while (1) {
                    printf("%d ", a[i]);
                    if (i == rear)
                        break;
                    i = (i + 1) % 10;
                }
                printf("\n");
            }
        } else if (choice == 4) {  // Exit
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice, try again.\n");
        }
    }

    return 0;
}

