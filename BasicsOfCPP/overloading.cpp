#include<iostream>
using namespace std;
int sam(int);
long sam(long);
double sam(double);

int main(){
    int x;
    long y;
    double z;
    cout<<"value of x"<<endl;
    cin>>x;
    cout<<"value of y"<<endl;
    cin>>y;
    cout<<"value of z"<<endl;
    cin>>z;
    sam(x);
    sam(y);
    sam(z);
     
    return 0;

}
int sam(int x){
    x = x+2;
   cout<<"x is integer = "<<x<<endl;
   }

long sam(long y){
    y=y*1000000000;
    cout<<"y is long = "<<y<<endl;
}

double sam(double z){
    z=z+1.22222222;
    cout<<"z is double = "<<z<<endl;
}