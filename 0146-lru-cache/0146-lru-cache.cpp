class Node{
public:
   int key,val;
   Node* next;
   Node* prev;
   Node(){
    key=-1;
    val=-1;
   }
   Node(int key1,int val1){
    key=key1;
    val=val1;
    prev=nullptr;
    next=nullptr;
   }
};
class LRUCache {
private:
    Node* head;
    Node* tail;
    unordered_map<int,Node*> a;
    int cap=0;
    void deleteN(Node* node){
        Node* newnode=node->prev;
        newnode->next=node->next;
        newnode->next->prev=newnode;
        node->next=nullptr;
        node->prev=nullptr;
    }
    void insertN(Node* node){
        node->next=head->next;
        head->next=node;
        node->prev=head;
        node->next->prev=node;
    }
public:
    LRUCache(int capacity) {
        cap=capacity;
        head=new Node();
        tail=new Node();
        head->next=tail;
        tail->prev=head;
        a.clear();
    }
    
    int get(int key) {
        if(a.find(key) == a.end()){
            return -1;
        }
        Node* newnode=a[key];
        int value=newnode->val;
        deleteN(newnode);
        insertN(newnode);
        return value;
    }
    
    void put(int key, int value) {
        if(a.find(key)!=a.end()){
            Node* newnode=a[key];
            newnode->val=value;
            deleteN(newnode);
            insertN(newnode);
            return;
        }
        if(a.size() == cap){
            Node* newnode=tail->prev;
            int key2=newnode->key;
            deleteN(newnode);
            a.erase(key2);
        }
        Node* newnode=new Node(key,value);
        insertN(newnode);
        a[key]=newnode;
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */