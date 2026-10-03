// Leetcode 219

#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> map; //SC=O(n)
    for(int i=0;i<nums.size();i++){ //TC=O(n)
        if(map.count(nums[i])){
            if(abs(map[nums[i]]-i) <=k) return true;
            else{
                map[nums[i]]=i;
            }
        }else{
            map[nums[i]]=i;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,1,2,3,4};
    int k = 6;

    cout<<containsNearbyDuplicate(arr, k);
    return 0;
}

// TC=O(n)
// SC=O(n)