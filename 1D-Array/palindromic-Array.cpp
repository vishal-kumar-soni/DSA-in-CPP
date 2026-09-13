#include<bits/stdc++.h>
using namespace std;

bool isPalindromic(vector<int>&arr){
    int i=0;
    int j = arr.size()-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
           return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    
    vector<int> arr={1,2,3,3,2,1};
    cout<<isPalindromic(arr);

    return 0;
}

// TC=O(n/2)
// SC=O(1)