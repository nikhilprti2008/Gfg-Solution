/* Structure of link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    bool isEven(Node* head) {
        // code here
        Node* temp = head;
        int len = 0;
        
        if(head == NULL){
            return true;
        }
        while(temp != NULL){
            len++;
            temp = temp -> next;
        }
        if(len % 2 == 0){
            return true;
        }
        else{
            return false;
            
        }
    }
};