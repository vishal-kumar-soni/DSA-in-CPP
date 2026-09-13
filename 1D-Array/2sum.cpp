#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>&arr, int target ){
    unordered_map <int,int> mpp;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int diff = target - arr[i];

        if(mpp.find(diff)==mpp.end()){ // !map.has(diff)
            mpp[arr[i]]=i;
           
        }else{
            return {mpp[diff], i};
        }
    }
  
}

int main(){
    vector<int> arr={3,1,2,5,0,6};
    int target=7;

    vector<int> res = twoSum(arr, target);
    for(auto it:res){
        cout<<it<< " ";
    }
   
    return 0;
}