
#include<iostream>
#include<vector>
#include<list>
using namespace std;

int maxSubArray(vector<int>&arr, int k ){
    int i=0;
    int j=0;

    int sum=0;
    int maxSum=0;

    while(j<arr.size()){
        sum+=arr[j];

        if(j<i+k-1){
            j++;
        }else if(j==i+k-1){
            maxSum=max(maxSum,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    return maxSum;
}

int main(){
    vector<int> arr={-2, 3, 5, 6, 4, 3, 4, 6, -4, 3, 3, -4, 0}; 
    int k=3;
    int res = maxSubArray(arr, k);

    cout<<res;

    return 0;
}