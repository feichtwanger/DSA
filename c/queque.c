
// Queue implementation ic C

#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main(){
    // deQueue is not possible on empty queue
    deQueue();

    //enQueue 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    display();

    //deQueue removes element entered first i.e. 1
    deQueue();

    //Now we have just 4 elemets
    display();

    return 0;
}

void enQueue(int value) {
    if (rear == SIZE - 1)
    {
        printf("\nQueue is Full!!");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nInserted -> %d", value);   
    }
}


void deQueue(){
    if (front == -1)
        printf("\nQueue is Empty");
    else{
        printf("\nDeleted : %d", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}

void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elemets are: \n");
        for (i=front; i <= rear; i++)
            printf("%d ", items[i]);
        
    }
    printf("\n");
}   