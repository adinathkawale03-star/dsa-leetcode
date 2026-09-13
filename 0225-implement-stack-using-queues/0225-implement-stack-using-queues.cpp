class MyStack {
private:
   queue<int> a;
   int size;
public:
    MyStack() {
        size=0;
    }
    
    void push(int x) {
        size=a.size();
        a.push(x);
        for(int i=1;i<=size;i++){
            a.push(a.front());
            a.pop();
        }

    }
    
    int pop() {
        if(empty()){
            return -1;
        }
        int ele=a.front();
        a.pop();
        return ele;

    }
    
    int top() {
        if(empty()){
            return -1;
        }
        return a.front();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */