#include <iostream>

using namespace std;

void funv(int i,int n){
    if(i>n) return;
    cout<<"shashwat"<<endl;

    funv(i+1,n);
}

int main() {
    // Your code here
    int t;
    cin>>t;

    funv(1,t);
    return 0;
}