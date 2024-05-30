#include<iostream>
#include<vector>
using namespace std;
#define MAX 100 //max is the declared size of vector.

int main(){
    vector<int> arr(MAX);//vector int of array declared.
    cout<<"enter the no. of elements = ";
    int count,sum = 0;
    cin>>count;
    for(int i = 0;i<=count;i++){
        arr[i] = i;
        sum += arr[i];

    }
    cout<<"Array sum = "<<sum<<endl;
    return 0; 
}