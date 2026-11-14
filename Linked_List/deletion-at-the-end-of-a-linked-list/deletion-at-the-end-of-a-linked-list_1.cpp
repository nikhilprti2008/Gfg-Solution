/* Linked List Node Structure
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        Node* temp = head;
        Node* prev = NULL;
        
        if(head == NULL){
            return head;
        }
        if(head -> next == NULL){
            delete head;
            head = NULL;
            return head;  
        }
        
        while(temp -> next -> next != NULL){
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
        
        return head;
    }
};