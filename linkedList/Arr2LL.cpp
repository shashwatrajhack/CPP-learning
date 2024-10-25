#include <bits/stdC++.h>

using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *convertArr2Ll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthOfLl(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        //cout<<temp -> data<<" ";
        temp = temp -> next;
        cnt++;
    }
    return cnt;

}

int checkIfPresent(Node* head,int val){

    Node* temp = head;

    while(temp){
        if(temp -> data == val)return 1;
        temp = temp -> next;
    }
  return 0;
}

int removeHead(Node* head){
    if(head == null)return head;
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;


}


int main()
{
    // Your code here
    cout << "Hello, world!" << endl;

    vector<int> arr = {12, 43, 5, 63};
    Node* head = convertArr2Ll(arr);

     head = removeHead(head);
     print(head);
    //cout<<lengthOfLl(head);
    //cout<<checkIfPresent(head,58);
    
    //cout << head->data;
    return 0;
}