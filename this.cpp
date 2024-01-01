#include<iostream>
using namespace std;

class number{
    private:
    int a;


    public:
    void getData(int m){
       a = m;

    }
    void display(){
         cout<<"a: "<<a<<endl;
    }


};

int main(){
    number n1(9);
    n1.display();

}