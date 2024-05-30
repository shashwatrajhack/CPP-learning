//the most famous sorting algo is bubble sort
#include<iostream>
using namespace std;

int main(){
    int arr[] = {79,34,128,69,54};
    int n = 5,temp;
    for(int step=0;step<n-1;++step){
        for(int i=0;i<n-step-1;++i){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        for(int i = 0;i<n;++i){
            cout<<arr[i]<<" ";
        }  
    }  

}