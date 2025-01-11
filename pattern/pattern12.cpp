#include <iostream>

using namespace std;

void print12(int n){
    int num = 1;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    };
};

int main() {
    // Your code here

    int n;
    cin>>n;
    print12(n);
    cout << "Hello, world!" << endl;
    return 0;
}