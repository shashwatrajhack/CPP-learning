#include<iostream>
using namespace std;

int sss = 134;

void display(){
    
    cout<<sss;
}

int main(){
    cout<<"value of local variable : "<<sss<<endl;
    display();
    return 0;
}

// class integer{
//     private:
//     int a;
//     public:
    
//     void getData(int m){
//         a=m;
//     }
//     integer(){

//     };
//     integer(int m){
//         a = m;

//     }
//     void display(){
//         cout<<"a: "<<a<<endl;
//     }
// };

// int main(){
//     integer i1(7),i2;
//     i1.display();
//     cout<<endl;
// }

// void xstrcpy(char *,char *);
// int main(){
//     char str1[] = "Nagpur";
//     char str2[10];
//     xstrcpy(str2,str1);
//     cout<<str2<<endl<<str1;
//     return 0;
// }

// void xstrcpy(char *t,char *s){
//     while(*s!='\0'){
//         *t = *s;
//         t++;
//         s++;
//     }
//     *t = '\0';
//     s = s-6;
//     *s = 'k';
// }
