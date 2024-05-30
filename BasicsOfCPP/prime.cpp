#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int i;

    for( i=2;i<a;i++){
        if(a%i==0){
            cout<<"not prime"<<endl;
            break;
        }

    }
    if(i==a){
        cout<<"prime"<<endl;

    }
    return 0;
}