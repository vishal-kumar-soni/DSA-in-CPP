// Leetcode 128

#include<bits/stdc++.h>
using namespace std;

int sequence(vector<int>&arr){
    if(arr.size()==0) return 0;
    sort(arr.begin(), arr.end()); // TC=O(nlog(n))
    
    int count = 1;
    int maxCount = 1;
    int i =0;
    while(i<arr.size()){ //TC = O(n)
        if(arr[i]==arr[arr.size()-1]){break;}
        if( arr[i] == (arr[i+1]-1)){
            count++;
        }else if(arr[i]==arr[i+1]){}
            else{
            count = 1;
        }
        maxCount= max(maxCount, count);
        i++;
    }
    return maxCount;
}

int main(){
    vector<int> arr = {1,0,1,2};   
    cout<< sequence(arr);
   
    return 0;
}

// TC=O(nlog(n))
// SC=O(1)