#include<iostream>
using namespace std;

void dem(){
    static int x=23;//static variable once defined stays for as long as code exist.
    cout<<x<<endl;
    x--;

}

int main(){
    for(int i=23;i>0;i--){
        cout<<"value of static variable: ";
         dem();
    }
    
    return 0;
}