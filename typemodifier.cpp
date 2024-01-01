//type modifier is used to modify or to give meaning the existing data type.
//four types of type modifier
//1.signed
//2.unsigned
//3.long
//4.short
//these are used for making code more efficient

#include<iostream>
using namespace std;

int main(){
    signed int x = 45;//holds both -ve and +ve value.
    unsigned int y = 45;//holds only positive value
    long int z = 4333;//holds integer value larger than normal int
    short int w = 45558;//smaller than normal int

    cout<<"size of signed int = "<<sizeof(signed int)<<endl<<"value of x: "<<x<<endl;
    cout<<"size of unsigned char = "<<sizeof(unsigned char)<<endl<<y<<endl;
    return 0;
}