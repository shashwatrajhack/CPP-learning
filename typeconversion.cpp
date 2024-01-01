//imnplicit type conversion
//explicit type conversion

#include<iostream>
using namespace std;

int main(){
    signed int x = 8;
    char y = 'r';
    cout<<"asciiValue of y : "<<(int)y<<endl;

    //implicit type conversion

    x = x+y;

    cout<<"value of x after type conversion : "<<x<<endl;
    return 0;
}