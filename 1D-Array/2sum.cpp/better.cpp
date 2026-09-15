//--------  Two pointer approach  ---------//

//constraint is that Array should be sorted here

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr, int target){
    vector<int> res;

    int i =0;
    int j = arr.size()-1;

    while(i<=j){
        if((arr[i]+arr[j])==target){
            res.push_back(i);
            res.push_back(j);
            break;
        }else if((arr[i]+arr[j])<target) i++;
        else j--;
    }
    return res;
}


int main(){
    vector<int> arr = {-2,1, 0, 3, 4, 5};
    int target = 2;

    vector<int> res = twoSum(arr, target);

    for(auto it : res){
        cout<<it<<" ";
    }

    return 0;
}

// Array should be sorted
// TC=O(n/2);
// SC= O(1);