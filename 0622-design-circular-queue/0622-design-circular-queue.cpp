class MyCircularQueue {
public:
    vector<int> q;
    int front, rear;
    int size, capacity;
    MyCircularQueue(int k) {
        capacity = k;
        q.resize(k);
        front = 0;
        rear = -1;
        size = 0;
    }
    bool enQueue(int value) {
        if (isFull())
            return false;
        rear = (rear + 1) % capacity;
        q[rear] = value;
        size++;
        return true;
    }
    bool deQueue() {//if empty return false and if capacity is full then apply front+1%capacity and move to start decrement the size and retunt true
        if (isEmpty())
            return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    }
    int Front() {
        if (isEmpty())
            return -1;
        return q[front];
    }
    int Rear() {
        if (isEmpty())
            return -1;
        return q[rear];
    }
    bool isEmpty() {//if empty then return 0
        return size == 0;
    }
    bool isFull() {//if full return capacity
        return size == capacity;
    }
};