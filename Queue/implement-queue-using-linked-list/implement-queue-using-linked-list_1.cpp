class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {
    Node* front;
    Node* rear;
    int cnt;

  public:
    myQueue() {
        front = rear = NULL;
        cnt = 0;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* newnode = new Node(x);
        
        if(front == NULL){
            front = rear = newnode;
        }
        
        else{
            rear -> next = newnode;
            rear = newnode;
        }
        cnt++;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(front == NULL){
            return;
        }
        Node* temp = front;
        front = front -> next;
        if(front == NULL){
            rear = NULL;
        }
        
        delete temp ;
        cnt--;
        
        
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(front == NULL){
            return -1;
        }
        
        return front -> data;
    }

    int size() {
        // Returns the current size of the queue.
        return cnt;
    }
};
