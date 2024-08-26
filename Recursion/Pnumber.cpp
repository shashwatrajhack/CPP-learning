#include<iostream>
using namespace std;

int cnt = 0;

void count(){
    if(cnt == 8 ) return;
    cout<<cnt<<endl;
    cnt++;
    count();

}



int main(){

    count();
    return 0;

} 