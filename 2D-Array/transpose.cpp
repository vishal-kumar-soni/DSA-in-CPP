//Leetcode 867

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();
    vector<vector<int>> res(col, vector<int>(row, 0));

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            res[i][j]= arr[j][i];
        }
    }
    return res;
}

int main(){
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}};

    vector<vector<int>> res = transpose(arr);

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}