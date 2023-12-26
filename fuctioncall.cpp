#include <iostream>
using namespace std;

int swapv(int a, int b) // call by value 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout <<"i: "<< a << " j: " << b << endl;
    return 0;
}

// int swapa(int *p,int *l){
//     int temp;
//     temp = *p;
//     *p = *l;
//     *l = temp;
//     return 0;
// }
void swapr(int &m, int &n){
    int t;
    t = m;
    m = n;
    n = t;

   //cout << "i: "<< m << " j: " << n << endl;
   
}
int main() {
    int i = 9, j = 8;
    
    swapv(i, j);
    // swapa(&i, &j);
    // cout << "i: " << i << " j: " << j << endl;

    swapr(i, j);
    cout << "i: " << i << " j: " << j << endl;

    return 0;
}
