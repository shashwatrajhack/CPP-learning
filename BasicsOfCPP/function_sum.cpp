#include <iostream>

using namespace std;

int sum(int num1,int num2){
    int num3 = num1 + num2;
    return num3;

}

int main() {
    // Your code here
    int num1,num2;
    cin>>num1>>num2;
    int result = sum(num1,num2);
    cout<<result;
    return 0;
}