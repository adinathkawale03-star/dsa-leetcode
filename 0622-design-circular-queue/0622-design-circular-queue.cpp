class MyCircularQueue {
private:
    struct Node {
        int val;
        Node* prev;
        Node* next;
        Node(int v) : val(v), prev(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    int size;
    int maxCapacity;
    void deleteNode(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        delete node;
    }
public:
    MyCircularQueue(int k) {
        maxCapacity = k;
        size = 0;
        head = new Node(-1);
        tail = new Node(-1);
        head->next = tail;
        tail->prev = head;
    }
    bool enQueue(int value) {
        if (isFull()) return false;
        Node* newNode = new Node(value);
        Node* lastNode = tail->prev;
        lastNode->next = newNode;
        newNode->prev = lastNode;
        newNode->next = tail;
        tail->prev = newNode;
        size++;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) return false;
        Node* nodeToDelete = head->next;
        deleteNode(nodeToDelete);
        size--;
        return true;
    }
    int Front() {
        if (isEmpty()) return -1;
        return head->next->val;
    }
    int Rear() {
        if (isEmpty()) return -1;
        return tail->prev->val;
    }
    bool isEmpty() {
        return size == 0;
    }
    bool isFull() {
        return size == maxCapacity;
    }
};
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */