//Leetcode 1929

#include<bits/stdc++.h>
using namespace std;

vector<int> concatenation(vector<int>&arr){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }

    return ans;
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> res = concatenation(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}