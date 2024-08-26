#include<bits/stdC++.h>
using namespace std;

void multiple(int num1,int num2){
    int res = num1 * num2;
    cout<<"multiplication of num1 & num2 is : "<<res;

}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    multiple(num1,num2);
    return 0;
}