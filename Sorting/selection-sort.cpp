#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){

        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
       if(arr[minIdx]<arr[i])  swap(arr[i],arr[minIdx]);
    }
    return;
}

int main(){

    int arr[5]={1,42,93,14,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, 5);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}