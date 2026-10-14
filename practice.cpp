#include<bits/stdc++.h>
using namespace std;

int calculate(vector<vector<int>>&arr){

   int n = arr.size();
   int d1 = 0;
   int d2 = 0;

    for(int i =0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i==j) d1+=arr[i][j];
            if(i+j==n-1) d2+=arr[i][j];
        }
    }

    return (d2-d1);
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},{15,6,27,28},{9,10,11,12},{13,14,15,16}}; 

    cout<<calculate(arr);

    return 0;
}