//
// Created by Administrator on 2024/12/21.
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

#endif //TEST_QUEUE_H

// 定义队列节点的结构体
typedef struct QueueNode {
    int data;
    struct QueueNode* next;
} QueueNode;

// 定义队列的结构体
typedef struct Queue {
    QueueNode* front; // 队头指针
    QueueNode* rear;  // 队尾指针
} Queue;

// 创建一个新的队列
Queue* createQueue() ;
void freeQueue(Queue* q);
int front(Queue* q);
int dequeue(Queue* q);
void enqueue(Queue* q, int data) ;
int isEmpty(Queue* q);
void Queue_test(void) ;


