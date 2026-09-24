#include<bits/stdc++.h>
using namespace std;

vector<int> moveToEnd(vector<int>&arr){
    int zero = -1;
    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]==0) {
            zero = i;
            break;
        }
    }
    if(zero == -1) return arr;

    for(int i=0;i<arr.size();i++){  //TC=O(n)
        if(i>zero && arr[i]>0){
           swap(arr[i],arr[zero]);
           zero++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {1, 0, 0, 2, 3, 2, 0, 0, 4, 5, 1};   
    vector<int> res = moveToEnd(arr);

    for(auto it: res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(n)
// SC=O(1)