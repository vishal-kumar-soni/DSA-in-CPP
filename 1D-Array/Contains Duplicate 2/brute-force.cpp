// Leetcode 219

#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    if(nums.size()==1) return  false;
    for(int i=0;i<nums.size()-1;i++){ //TC=O(n)

        int j = i+1;
        while(j<=i+k){ //TC=O(k)
            if(j==nums.size()) break;
            if(nums[i]==nums[j]){
                return true;
            }
            j++;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,1,2,3,4};
    int k = 2;

    cout<<containsNearbyDuplicate(arr, k);
    return 0;
}

// TC=O(n*k)
// SC=O(1)