#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int>&a, vector<int>&b){
    vector<int> res; //SC=O(min(m,n))
    unordered_map<int, int> map; //SC=O(max(m,n))

    for(int i=0;i<a.size();i++){ //TC=O(m)
        map[a[i]]++;
    }

    for(int i=0;i<b.size();i++){ //TC=O(n)
        if(map.count(b[i])){
            res.push_back(b[i]);
        }
    }

    return res;
}

int main(){
    vector<int> a = {1,2,3,4,45,57}; 
    vector<int> b = {1,2,3,4,45,57};

    vector<int> res = Intersection(a, b);

    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}

// TC=O(m+n)
// SC=O(m+n)