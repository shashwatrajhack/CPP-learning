#include<iostream>
using namespace std;

int main(){
    int i = 20;
    int &j = i;
    cout<<"i = "<<i<<"j= "<<j<<endl;
    j = 30;
    cout<<"i = "<<i<<"j= "<<j<<endl;
    i = 40;
    cout<<"i = "<<i<<"j= "<<j<<endl;
    i++;
    cout<<"i = "<<i<<"j= "<<j<<endl;
    j++;
    cout<<"i = "<<i<<"j= "<<j<<endl;
    cout<<"address of i= "<<&i<<"address of j = "<<&j<<endl;
    return 0;
    
}