//To control the flow of loops on meeting some specified codition;
//we use break and continue statement;

#include<iostream>
using namespace std;

int main(){

    int pocketMoney = 3000;
     for(int date=1;date=30;date++){
        if(date%2==0){
            continue;
        }

        if(pocketMoney==0){
            break;
        }
        cout<<date<<endl;
        cout<<"you can go out !"<<endl;
        pocketMoney = pocketMoney-300;
     }
     return 0;

}