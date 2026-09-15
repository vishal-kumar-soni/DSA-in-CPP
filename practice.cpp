#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr,int target){
    int i=0;
    int j = arr.size();

    while(i<=j){
        int mid = (i+j)/2;
            
        if(target==arr[mid]) return mid;

        if(arr[mid]>target){
            j=mid;
        }else if(arr[mid]<target){
            i=mid;
        }
    }
    return -1;
}

int main(){
       vector<int> arr={2,5,7,8,11,13,19};  
    int target = 9;
    int res = binarySearch(arr, target);
    cout<<res;
   
    return 0;
}