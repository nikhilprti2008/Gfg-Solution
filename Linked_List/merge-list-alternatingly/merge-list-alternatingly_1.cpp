/* Structure of linked list Node
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
    vector<Node *> mergeList(Node *head1, Node *head2) {
        // code Here
        Node* curr1 = head1;
        Node* curr2 = head2;
        
        while(curr1 != NULL && curr2 != NULL){
            
            Node* next1 = curr1 -> next;
            Node* next2 = curr2 -> next;
            
            curr1 -> next = curr2;
            curr2 -> next =  next1;
            
            curr1 = next1;
            curr2 = next2;
        }
        
        head2 = curr2;
        return {head1,head2};
    }
};