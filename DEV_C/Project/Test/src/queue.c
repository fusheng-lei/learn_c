/**
  ******************************************************************************
  * @file           : queue.c
  * @author         : Administrator
  * @brief          : None
  * @attention      : None
  * @date           : 2024/12/21
  ******************************************************************************
  */

#include <stdio.h>
#include <stdlib.h>
#include "../inc/queue.h"

// 创建一个新的队列
Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (q == NULL) {
        fprintf(stderr, "Out of memory\n");
        exit(EXIT_FAILURE);
    }
    q->front = q->rear = NULL;
    return q;
}

// 判断队列是否为空
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// 入队操作
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

// 出队操作
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

// 查看队头元素
int front(Queue* q) {
    if (isEmpty(q)) {
        fprintf(stderr, "Queue is empty\n");
        exit(EXIT_FAILURE);
    }
    return q->front->data;
}

// 释放队列占用的内存
void freeQueue(Queue* q) {
    while (!isEmpty(q)) {
        dequeue(q);
    }
    free(q);
}

void Queue_test(void)
{
    Queue* q = createQueue(); // 创建队列

    enqueue(q, 1); // 入队
    enqueue(q, 2);
    enqueue(q, 3);

    printf("Front element is: %d\n", front(q)); // 查看队头元素

    while (!isEmpty(q)) {
        printf("%d ", dequeue(q)); // 出队并打印元素
    }
    if (isEmpty(q))
        printf("\n");

    freeQueue(q); // 释放队列占用的内存
}