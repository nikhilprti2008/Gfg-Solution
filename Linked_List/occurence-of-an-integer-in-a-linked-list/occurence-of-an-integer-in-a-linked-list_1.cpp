/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int count(Node* head, int key) {
        unordered_map<int,int> mpp;
        
        Node* temp = head;
        
        while(temp != NULL){
            mpp[temp -> data]++;
            temp = temp -> next;
        }
        
        for(auto it:mpp){
            if(key == it.first){
                return it.second;
            }
        }
        return 0;
    }
};