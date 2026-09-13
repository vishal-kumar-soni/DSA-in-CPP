// First negative in subArray of D

#include<bits/stdc++.h>
using namespace std;

vector<int> negative(vector<int>&arr, int k){
    list<int> lis;
    vector<int>res;

    int i=0;
    int j=0;
    while(j<arr.size()){
       if(arr[j]<0) lis.push_front(arr[j]);

        if(j<i+k-1){
            j++;
        }else if(j==i+k-1){
            if(lis.size()!=0){
                res.push_back(lis.back());
                if(arr[i]<0){
                    lis.pop_back();
                }
            }
            i++;
            j++;
        }
    }

   return res;
}

int main(){
    vector<int> arr = {3, 4, -6, -1, -1, 5, 2,  -9};
    int k=3;
    vector<int> ans = negative(arr, k);

    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}