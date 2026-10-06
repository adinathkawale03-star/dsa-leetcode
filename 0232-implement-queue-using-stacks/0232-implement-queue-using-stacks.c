// Stack implementation using dynamic memory
typedef struct {
    int* data;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->data = (int*)malloc(sizeof(int) * capacity);
    s->top = -1;
    s->capacity = capacity;
    return s;
}

void pushStack(Stack* s, int val) {
    s->data[++(s->top)] = val;
}

int popStack(Stack* s) {
    return s->data[(s->top)--];
}

int peekStack(Stack* s) {
    return s->data[s->top];
}

bool isEmptyStack(Stack* s) {
    return s->top == -1;
}

void freeStack(Stack* s) {
    free(s->data);
    free(s);
}

// Queue structure containing two stacks
typedef struct {
    Stack* inStack;  // Handles push operations
    Stack* outStack; // Handles pop and peek operations
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    // Max calls constraint is 100 according to problem constraints
    obj->inStack = createStack(100);
    obj->outStack = createStack(100);
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    pushStack(obj->inStack, x);
}

// Helper function to transfer elements when outStack is empty
void transfer(MyQueue* obj) {
    if (isEmptyStack(obj->outStack)) {
        while (!isEmptyStack(obj->inStack)) {
            pushStack(obj->outStack, popStack(obj->inStack));
        }
    }
}

int myQueuePop(MyQueue* obj) {
    transfer(obj);
    return popStack(obj->outStack);
}

int myQueuePeek(MyQueue* obj) {
    transfer(obj);
    return peekStack(obj->outStack);
}

bool myQueueEmpty(MyQueue* obj) {
    return isEmptyStack(obj->inStack) && isEmptyStack(obj->outStack);
}

void myQueueFree(MyQueue* obj) {
    freeStack(obj->inStack);
    freeStack(obj->outStack);
    free(obj);
}