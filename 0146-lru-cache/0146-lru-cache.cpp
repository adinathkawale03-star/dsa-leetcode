class d{
public:
   int key,val;
   d* next;
   d* prev;
   d(int key1=-1,int val1=-1){
    key=key1;
    val=val1;
    next=nullptr;
    prev=nullptr;
   }
};
class LRUCache {
private:
   d* head;
   d* tail;
   int cap;
   unordered_map<int,d*> a;
   void inserth(d* node){
    node->next=head->next;
    node->prev=head;
    head->next->prev=node;
    head->next=node;
   }
   void deleten(d* node){
    d* newnode=node->prev;
    newnode->next=node->next;
    node->next->prev=newnode;
    node->next=nullptr;
    node->prev=nullptr;
   }
public:
    LRUCache(int capacity) {
        cap=capacity;
        a.clear();
        head=new d();
        tail=new d();
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(a.find(key) == a.end()){
            return -1;
        }
        d* newnode=a[key];
        int value=newnode->val;
        deleten(newnode);
        inserth(newnode);
        return value;
    }
    
    void put(int key, int value) {
       if(a.find(key) != a.end()){
        d* newnode=a[key];
        newnode->val=value;
        deleten(newnode);
        inserth(newnode);
        return;
       }
       if(a.size() == cap){
        d* node=tail->prev;
        deleten(node);
        d* newnode=new d(key,value);
        inserth(newnode);
        int k=node->key;
        delete node;
        a.erase(k);
        a[key]=newnode;
       }
       else{
        d* newnode=new d(key,value);
        inserth(newnode);
        a[key]=newnode;
       }
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */