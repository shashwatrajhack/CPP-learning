#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age<18){
        cout<<"not eligible for job";
    }
    if(age<=54){
        cout<<"eligible for job";
    }
    else if(age<=57){
        cout<<"eligible for job but retirement soon";
    }

    else if(age>57){
        cout<<"retirement time";
    }
}