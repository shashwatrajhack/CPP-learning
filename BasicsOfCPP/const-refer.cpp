#include<iostream>
using namespace std;
// void change(const int&);

// int main(){
//     int i = 32;
//     change (i);
//     cout<<endl<<i;
//     return 0;

// }

// void change(const int &j)
// {
//     j = 45;
// }

int main(){
    const int i = 10;
    int &j = i;
    cout<<"i= "<<i<<"j= "<<j;
    j = 29;
    cout<<"i = "<<i<<"j= "<<j;
    return 0;

}