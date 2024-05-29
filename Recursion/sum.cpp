#include <bits/stdc++.h>

using namespace std;


class Solution{
    public:

    void printNos(int N){
        if(N>=1){
            printNos(N-1);
            cout<<N<<" ";

        }
        return;
    }
};

int main() {
    // Your code here
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        ob.printNos(N);
        cout<<" \n";
    }
    
    return 0;
}