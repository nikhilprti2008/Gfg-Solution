/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class myStack {
    Node* top;
    int cnt;

  public:
    myStack() {
        // Initialize your data member
        cnt = 0;
        top = NULL;
        
    }

    bool isEmpty() {
        // check if the stack is empty
        return top == NULL;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        
        Node* newnode = new Node(x);
        if(top == NULL){
            top = newnode;
        }else{
        newnode -> next = top;
        top = newnode;
            
        }
        
        cnt++;
    }

    void pop() {
        // Removes the top element of the stack
        if(top == NULL)return;
        Node* temp = top;
        top = top -> next;
        
        delete temp;
        cnt--;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(top == NULL)return -1;
        
        return top -> data;
    }

    int size() {
        // Returns the current size of the stack
        return cnt;
    }
};