#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Enter the no. of elements: "<<endl;
    int count,sum = 0;
    cin>>count;

    vector<int> arr;//default size
    arr.resize(count);//resize of array
    for(int i=0;i<=arr.size();i++){
        arr[i]=i;
        sum += arr[i];

    }

    cout<<"Array sum : "<<sum<<endl;

}
