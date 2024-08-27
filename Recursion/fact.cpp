#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n==0)
//       return 1;

//     return n*factorial(n-1);  
// }

int factorial(int i,int fact){
  if(i==0) return fact;

  return (i-1,fact*i);
}

int main(){
    int n;
    cin>>n;

    int result = factorial(n,1);

    cout<<result;

    // int ans = factorial(n,1);

    // cout<<ans<<endl;

    return 0;


}