#include<iostream>
using namespace std;

struct Comp{
    double x;
    string i;

};
Comp setComp(int x,string i);
Comp operator + (Comp x,Comp i);
Comp operator - (Comp x,Comp i);
void printComp(Comp c);


int main(){
    Comp a,b,c,d;

    a=setComp(1.2,"a");
    b = setComp(4.5,"b");
    c=a+b;
    d=b+c-a;
    
    cout<<"c= ";
    printComp(c);
    cout<<"d = ";
    printComp(d);
    return 0;
}

Comp setComp(double x,string i)
{
    Comp temp;
    temp.x = x;
    temp.i = i;
    return temp;
}

void printComp(Comp t){
    cout<<"("<<t.x<<","<<t.i<<")"<<endl;

}

Comp operator +(Comp x,Comp i)
{
    Comp temp;
    
}