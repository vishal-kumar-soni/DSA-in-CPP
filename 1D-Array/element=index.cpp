// Given an array arr. Our task is to find the elements whose value is equal
// to its index value ( Consider 1-based indexing ).

#include<iostream>
#include<vector>
using namespace std;

vector<int> elementEQIdx(vector<int>&arr){
    vector<int> res;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==i+1){
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main(){
    vector<int> arr={15, 2, 45, 4 , 5};

    vector<int> res = elementEQIdx(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}