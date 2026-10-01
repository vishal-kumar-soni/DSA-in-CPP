#include<bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int>&a, vector<int>&b){
    vector<int> res; //SC=O(min(m,n))
   
    int i =0;
    int j =0;
    int lastInserted = -1;
    while(i<a.size() && j<b.size()){ //TC=O(min(m,n))
        if(a[i]==b[j]){
            if(a[i]!=lastInserted){
              res.push_back(a[i]);
              lastInserted = a[i];
            }
            i++;
            j++;
        }
        else if(a[i]>b[j]) j++;
        else if(a[i]<b[j]) i++;
    }
    return res;
}

int main(){
    vector<int> a = {1,2,2,4,5}; 
    vector<int> b = {1,1,2,3,4,5,10};

    vector<int> res = Intersection(a, b);

    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}

// TC=O(n)
// SC=O(n)