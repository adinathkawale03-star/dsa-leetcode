class MyQueue {
private:
   stack<int> a;
   stack<int> b;
public:
    MyQueue() {
    }
    
    void push(int x) {
        while(a.size()){
            b.push(a.top());
            a.pop();
        }
        a.push(x);
        while(b.size()){
            a.push(b.top());
            b.pop();
        }
    }
    
    int pop() {
        if(empty()){return -1;}
        int ele=a.top();
        a.pop();
        return ele;
    }
    
    int peek() {
        if(empty()){
            return -1;
        }
        return a.top();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */