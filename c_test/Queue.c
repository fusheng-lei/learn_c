#include <stdio.h>
#include <stdlib.h>

// ������нڵ�Ľṹ��
typedef struct QueueNode {
    int data;
    struct QueueNode* next;
} QueueNode;

// ������еĽṹ��
typedef struct Queue {
    QueueNode* front; // ��ͷָ��
    QueueNode* rear;  // ��βָ��
} Queue;

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
