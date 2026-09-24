#include<bits/stdc++.h>
using namespace std;

vector<int> moveToEnd(vector<int>&arr){
    vector<int> tempArr; //SC=O(n)
    for(int i = 0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]>0) tempArr.push_back(arr[i]); 
    }

    for(int i = tempArr.size();i<arr.size();i++){//TC=O(n)
        tempArr.push_back(0);
    }

    return tempArr;

}

int main(){
    vector<int> arr = {1, 0, 0, 2, 3, 2, 0, 0, 4, 5, 1};   
    vector<int> res = moveToEnd(arr);

    for(auto it: res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(2n)
// SC=O(n)