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
Queue* createQueue() ;
void freeQueue(Queue* q);
int front(Queue* q);
int dequeue(Queue* q);
void enqueue(Queue* q, int data) ;
int isEmpty(Queue* q);
