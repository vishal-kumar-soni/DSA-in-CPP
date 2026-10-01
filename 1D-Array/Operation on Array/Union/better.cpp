#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int>&a, vector<int>&b){
    vector<int> res; // SC = O(m+n)

    int i =0;
    int j = 0;
    int lastInserted = -1;
    while(i<a.size() && j<b.size()){ // TC=O(m+n)
        if(a[i]<b[j]){
            if(a[i]!=lastInserted){
                res.push_back(a[i]);
                lastInserted = a[i];
            }
            i++;
           
        }else if(a[i]>b[j]){
            if(b[j]!=lastInserted){
                res.push_back(b[j]);
                lastInserted=b[j];
            }
            j++;
           
        }else{
            if(lastInserted!=a[i]){
                res.push_back(b[j]);
                lastInserted=b[j];
            }
            i++;
            j++;
        }
    }
    while(i<a.size()){
        res.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        res.push_back(b[j]);
        j++;
    }

    return res;
}

int main(){
    vector<int> a = {1,3,3,5,5,5,5,5,5,5,5,5,5,5,5,5,6,7}; 
    vector<int> b = {2,2,2,2,2,2,2,2,3,4,4, 5,6};

    vector<int> res = Union(a, b);

    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}

// TC=O(m+n)
// SC=O(m+n)