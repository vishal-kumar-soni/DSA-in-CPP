#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,5,3,4,3,5,6};
    unordered_map<int, int> mp;

    for(int i = 0;i<arr.size();i++){
        int res = -1;
        if(mp.find(arr[i])!=mp.end()){
            mp[arr[i]]++;
        }else{
            mp.insert({arr[i],1});
        }
    }

    for(auto i:mp){
       cout<< i.first <<" - " << i.second<< endl;
    }
   
    return 0;
}