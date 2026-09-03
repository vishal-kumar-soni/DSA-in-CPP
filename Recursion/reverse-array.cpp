#include<bits/stdc++.h>
using namespace std;

void  reverse(int i,int arr[],int j){
    if(i>=j) return;
    swap(arr[i],arr[j]);
    reverse(i+1,arr, j-1);
}

int main(){
    int arr[6]= {3,5,0,4,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(0, arr, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
