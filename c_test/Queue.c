#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// ����һ���µĶ���
Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (q == NULL) {
        fprintf(stderr, "Out of memory\n");
        exit(EXIT_FAILURE);
    }
    q->front = q->rear = NULL;
    return q;
}

// �ж϶����Ƿ�Ϊ��
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// ��Ӳ���
void enqueue(Queue* q, int data) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    if (newNode == NULL) {
        fprintf(stderr, "Out of memory\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

// ���Ӳ���
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        fprintf(stderr, "Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    QueueNode* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return data;
}

// �鿴��ͷԪ��
int front(Queue* q) {
    if (isEmpty(q)) {
        fprintf(stderr, "Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    return q->front->data;
}

// �ͷŶ���ռ�õ��ڴ�
void freeQueue(Queue* q) {
    while (!isEmpty(q)) {
        dequeue(q);
    }
    free(q);
}

void Queue_test(void)
{
    Queue* q = createQueue(); // ��������

    enqueue(q, 1); // ���
    enqueue(q, 2);
    enqueue(q, 3);

    printf("Front element is: %d\n", front(q)); // �鿴��ͷԪ��

    while (!isEmpty(q)) {
        printf("%d ", dequeue(q)); // ���Ӳ���ӡԪ��
    }
    if (isEmpty(q))
        printf("\n");

    freeQueue(q); // �ͷŶ���ռ�õ��ڴ�
}