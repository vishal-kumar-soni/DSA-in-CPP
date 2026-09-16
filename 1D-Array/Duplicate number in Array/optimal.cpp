#include<bits/stdc++.h>
using namespace std;

vector<int> Duplicate(vector<int>&arr){
    vector<int> res; //SC=O(n/2)
    unordered_map<int, int> map; //SC=O(n)

    for(int i =0;i<arr.size();i++){ //TC=O(n)
        if(map.count(arr[i])){
            map[arr[i]]++;
        }else{
            map[arr[i]] = 1;
        }
    }

    for(auto it:map){ //TC=O(n)
        if(it.second >1) res.push_back(it.first);
    }

    return res;
}

int main(){
    vector<int> arr = {2,3,2,1,2,3,2};
    vector<int> res= Duplicate(arr);

    for(int i:res){
       cout<<i<<" ";
    }
    return 0;
}

// TC=O(n)
// SC=O(n)