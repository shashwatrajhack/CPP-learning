#include<iostream>
using namespace std;
const char *fun();
int main(){
    const char *p;
    p = fun();
    *p = 'a';
    cout<<p;
    

    return 0;
}
const char *fun(){
    return "rain";
}