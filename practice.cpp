#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr, int target){
    unordered_map<int, int> map; // SC=O(n)
    int i=0;
    while(i<arr.size()){ //TC=O(n)
        int diff = target-arr[i];
        if(map.find(diff)!=map.end()){
            return {map[diff], i};
        }
        
        map[arr[i]]=i;
        i++;
        
    }
    return {};
}

int main(){
    vector<int> arr = {3,6,5,1,10};
    int target = 16;
    
    // vector<int> res = twoSum(arr, target);

    // for(auto it:res){
    //     cout<<it<<" ";
    // }

    unordered_map<int, int> mp;  
    mp[5]=5;
    mp[1]=10;
    mp[20]=200;
    mp[15]=150;
    mp[12]=120; 

    cout<<mp.contains(1);
    return 0;
}

// TC=O(n)
// SC=O(n)