/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){return root;}
        Node* newnode=root;
        Node* newnode2=root;
        queue<Node*> qu;
        qu.push(root);
        while(!qu.empty()){
            int n=qu.size();
            for(int i=0;i<n;i++){
                newnode2=qu.front();
                qu.pop();
                if(i!=n-1){
                    newnode2->next=qu.front();
                }
                else{
                    newnode2->next=NULL;
                }
                if(newnode2->left!=NULL){qu.push(newnode2->left);}
                if(newnode2->right!=NULL){qu.push(newnode2->right);}
            }
        }
        return root;
    }
};