#include<bits/stdc++.h>
using namespace std;

vector<int> Alternate(vector<int>&arr){
    vector<int> res(arr.size()); // SC=O(n)
    int poisIdx=0;
    int negiIdx=1;

    for(int i=0;i<arr.size();i++){ // TC=O(n)
        if(arr[i]>=0){
            res[poisIdx] = arr[i];
            poisIdx+=2;
        }else{
            res[negiIdx] = arr[i];
            negiIdx+=2;
        }
    }

    return res;
}

int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};   //  [3,-2,1,-5,2,-4] 
    vector<int> res = Alternate(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(n)
// SC=O(n)