// Given an array of positive integers. This function returns all the
// leaders in the array. An element is considered a leader if it is
// greater than or equal to all elements to its right. The rightmost element
// is always a leader.


#include<iostream>
#include<vector>
#include<list>
using namespace std;

int binarySearch(vector<int>&arr,int target ){
    int i=0;
    int j=arr.size()-1;

    while(i<=j){
        int mid=(i+j)/2;

        if(arr[mid]==target) return mid;
        if(arr[mid]>target){
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={2,3,4,6,7,9,10,12,13};  
    int target = 12;
    int res = binarySearch(arr, target);
    cout<<res;
   
    return 0;
}