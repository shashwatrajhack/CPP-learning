#include <iostream>

using namespace std;

void solve(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum +=i;
        

    }
    cout<<sum<<endl;

}

int main() {
    // Your code here
    solve(6);
    solve(10);
    solve(100);
    return 0;
}