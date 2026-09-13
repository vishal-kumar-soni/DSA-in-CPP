#include<bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int>&arr){
   int maxOnes = 0;
       int count = 0;
       for(int j = 0;j<arr.size();j++){ // TC =O(n)
           if(arr[j]==1) count++;
           else{
               maxOnes= max(maxOnes, count);
               count = 0;
            }
        }
        if(count>0){
            maxOnes= max(maxOnes, count);
        }
       
        int maxZeros = 0;
        count = 0;
        for(int j = 0;j<arr.size();j++){ // TC=O(n)
           if(arr[j]==0) count++;
           else{
               maxZeros= max(maxZeros, count);
               count = 0;
            }
        }
        if(count>0){
            maxZeros= max(maxZeros, count);
        }

    return max(maxZeros, maxOnes);
}

int main(){
    vector<int> arr={0, 0};
    cout<<maxConsecutive(arr);
    
    return 0;
}

// TC=O(n)
// SC=O(1)