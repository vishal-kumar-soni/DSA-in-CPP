#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(5);
    for(int i = 0;i<5;i++){
        cout<<"Enter "<<i<<"th number: ";
        cin>>arr[i];
    }

    cout<<"\n Printing the values\n";

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
 
    return 0;
}