class MyLinkedList {
private:
struct Node{
    int val;
    Node* next;
    Node(int val1){
        next=nullptr;
        val=val1;
    }
};
Node* head;
int size;
public:
    MyLinkedList(){
      head=nullptr;
      size=0;
    }
    
    int get(int index) {
       if((index<0 || size<=index)){
        return -1;
       }
       Node* temp = head;
       for (int i = 0; i < index; i++) {
            temp = temp->next;
       }
       return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        size++;
    }
    
    void addAtTail(int val) {
       if(size==0){
        addAtHead(val);
        return;
       }
       Node* temp=head;
       while(temp->next!=NULL){
        temp=temp->next;
       }
       Node* newnode=new Node(val);
       temp->next=newnode;
       size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if(index==0){
            addAtHead(val);
            return;
        }
       Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;
        size++;

    }
    
    void deleteAtIndex(int index) { 
        if (index < 0 || index >= size) {
            return;
        }
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* newnode = temp->next;
        temp->next = newnode->next;
        delete newnode;
        size--;       
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
