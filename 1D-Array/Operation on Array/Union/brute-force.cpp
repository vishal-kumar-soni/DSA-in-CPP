// If both the array is not Sorted.

#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int>&a, vector<int>&b){
    unordered_map<int, int> map; // SC=O(m+n)
    vector<int> res; //SC=O(m+n)

    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){ //TC=O(m+n)
        if(map.find(a[i])==map.end()){
            res.push_back(a[i]);
            map[a[i]]++;
        }
        if(map.find(b[j])==map.end()){
            res.push_back(b[j]);
            map[b[j]]++;
        }
        i++;
        j++;
    }
    while(i<a.size()){
        if(map.find(a[i])==map.end()){
            res.push_back(a[i]);
            map[a[i]]++;
        }
        i++;
    }

    while(j<b.size()){
         if(map.find(a[i])==map.end()){
            res.push_back(b[j]);
            map[b[j]]++;
        }
        j++;
    }
    sort(res.begin(), res.end()); //TC=O(m+n)
    return res;
}

int main(){
    vector<int> a = {5,3,1,1,4,3};
    vector<int> b = {6,3,5,3};

    vector<int> res = Union(a, b);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(m+n + nlogn)
// SC=O(m+n)