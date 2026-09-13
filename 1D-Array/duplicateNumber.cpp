#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> duplicate(vector<int> &arr){
    unordered_map<int,int> mpp;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second>1){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    vector<int> arr ={2, 3, 4, 3, 2, 5};

    vector<int> ans = duplicate(arr);

    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}