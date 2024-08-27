#include <iostream>

using namespace std;

//functional method in recursion
int func(int n){
    if(n==0) return 0;
    return (n+func(n-1));
}

//parametrized method in recursion
int func(int i,int sum){
    if(i<0){
        return sum;
    }
    return(func(i-1,sum+i));
}

int main() {
    // Your code here
    cout << "Hello, world!" << endl;
    int N;
    cin>>N;
    cout<<func(N,0);
    return 0;
}