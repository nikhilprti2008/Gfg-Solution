/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp = new Node(x);
        if(head == NULL){
            return temp;
        }
        
       Node* tail =  head;
       while(tail -> next != NULL){
           tail = tail -> next;
       }
       
       tail -> next = temp;
       
       return head;
    }
};