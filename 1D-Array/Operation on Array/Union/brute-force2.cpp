#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int>&a, vector<int>&b){
    map<int, int> map; // SC=O(m+n)
    vector<int> res; //SC=O(m+n)

    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){ //TC=O(m+n)
        map.emplace(a[i], 1); // Each map.emplace() costs TC = O(log(m+n)).
        map.emplace(b[j], 1);
        i++;
        j++;
    }
    while(i<a.size()){
        map.emplace(a[i], 1);
        i++;
    }

    while(j<b.size()){
        map.emplace(b[j], 1);
        j++;
    }

    for(auto it:map){ //TC=O(m+n)
        res.push_back(it.first);
    }
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

// TC=O(m+n*log(m+n))
// SC=O(m+n)