#include<iostream>
using namespace std;

class square{
    public:
    int side;

    void area_peri(){
        int area,peri;
        cin>>side;
        area = side*side;
        peri = 4*side;
        cout<<"area of square is: "<<area<<endl<<"perimeter of square is: "<<peri<<endl;
    }
};

int main(){
    cout<<"enter the value of side:"<<endl;
    square a1;
    a1.area_peri();
}
/*
 class Rectangle
{
private:
    int len,br;

public:

int areap(){
    cout<<"Enter length and breadth"<<endl;
    cin>>len>>br;
    int area = len*br;
    int peri = 2*(len+br);
    cout<<"area of rectangle"<<area<<endl<<"perimeter of rectangle"<<peri<<endl;
    //return area;
    
}
int area,peri;
};

int main(){
    Rectangle r1;
    r1.areap();
    // r1.area = r1.areap();
    // r1.peri = r1.areap();
    // cout<<"area of rectangle = " <<r1.area<<endl<<"perimeter of rectangle= "<<r1.peri<<endl;
    return 0;
};
*/







