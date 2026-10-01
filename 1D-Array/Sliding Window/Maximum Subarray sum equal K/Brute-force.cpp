#include<bits/stdc++.h>
using namespace std;

int maximunSubArray(vector<int>&arr, int k){
   int largest = INT_MIN;
    for(int i=0;i<=arr.size()-k;i++){
        int j=i;
        int sum = 0;
        while(j<i+k){
           sum+=arr[j];
            j++;
        }
        largest = max(largest, sum);
    }
    return largest;
}

int main(){
    vector<int> arr = {-2, 3, -5, -6, -4, 39, 3, 4, 10}; // 46
    int k =3;
    cout<<maximunSubArray(arr, k);
   
    return 0;
}

// TC=O(n*k)
// SC=O(1)