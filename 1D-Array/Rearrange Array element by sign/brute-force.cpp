#include<bits/stdc++.h>
using namespace std;

vector<int> Alternate(vector<int>&arr){
    vector<int> posi; // SC=O(n) or
    vector<int> negi; // SC=O(n)

    for(int i=0;i<arr.size();i++){ // TC=O(n)
        if(arr[i]>=0) posi.push_back(arr[i]);
        else negi.push_back(arr[i]);
    }

    int i=0;
    int j=0;
    while(j<posi.size()){ //TC=O(n/2)
        
        arr[i] = posi[j];
        arr[i+1] = negi[j];

        i+=2;
        j++;
    }

    return arr;
}

int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};   //  [3,-2,1,-5,2,-4] 
    vector<int> res = Alternate(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(n)
// SC=O(n)