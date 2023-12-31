#include<iostream>
using namespace std;

inline int cube(int s){
    return(s*s*s);
}

int main(){
    int x;
    cin>>x;
    cout<<"cube of "<<cube(x);
    return 0;
}