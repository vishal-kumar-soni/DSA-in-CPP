#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
   vector <int> vec;
   int left = low;
   int right = mid+1;

   while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            vec.push_back(arr[left]);
            left++;
        }else if(arr[right]<arr[left]){
            vec.push_back(arr[right]);
            right++;
        }else{
            vec.push_back(arr[left]);
            vec.push_back(arr[right]);
            left++;
            right++;
        }
   }
   
    while(left<=mid){
        vec.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        vec.push_back(arr[right]);
        right++;
    }

   for(int i=low;i<=high;i++){
       arr[i]=vec[i-low];
    }
    for(int i=0;i<vec.size();i++){
       arr[i]=vec[i];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low==high) return; 
    int mid=(low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int arr[8] = {4, 2, 3, 11, 5, 7, 8, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}