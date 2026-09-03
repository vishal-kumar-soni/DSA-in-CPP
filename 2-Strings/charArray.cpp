#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[10] = {'a','p','p','l','e'};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    arr[3]='\0'; // at 3rd index \0 is l is replaced by \0 which terminate the loop
    cout<<arr;
    
    return 0;
}