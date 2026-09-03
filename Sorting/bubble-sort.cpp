#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
 
   for(int i=0;i<n-1;i++){
        int j=0;
        bool wantSwap=false;
        while (j < n - i - 1){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                j=j+1;
            }else {
                j++;
            }
            wantSwap=true;
        }
        if(wantSwap==false) break;
    }

    return;
}

int main(){

    int arr[5]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, 5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// average/Worst TC=O(n*n)
// best TC=O(n)
