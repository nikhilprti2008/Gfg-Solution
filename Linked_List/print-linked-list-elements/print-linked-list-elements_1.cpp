/* Structure for Link list node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> printList(Node *head) {
        vector<int> ans;
        Node* temp = head;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        return ans;
    }
};