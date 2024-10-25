#include <bits/stdC++.h>

using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main() {
    // Your code here
    vector<int> arr = {2,5,8,6};
    Node* y = new Node(arr[0]);
    cout<<y;
    
    return 0;
}