#include<bits/stdc++.h>
using namespace std;

int subArraySum(vector<int>&arr, int k){
    int sum = 0;
    int largest = INT_MIN;
    int i =0;
    int j =0;
    while(j<arr.size()){
        sum+=arr[j];

        if(j<k){
            j++;
        }else{
            largest = max(largest, sum);
           sum-=arr[i];
           i++;
           j++;
        }
    }
    return largest;
}

int main(){
    vector<int> arr = {-2,3,-5,6,4,3,4,6,-4,3,3,-4,0}; //13
    int k =3;
    cout<<subArraySum(arr, k);

    return 0;
}

// TC=O(n))
// SC=O(1)