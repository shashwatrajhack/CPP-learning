#include <iostream>

using namespace std;

void printNos(int n){
    int i = 0;
    if(i>n)return;
    cout<< i <<" ";

    i = i+1;

    printNos(n);
}

int main(){
    int N;

    cin>>N;

    cout<<printNos(N);


}