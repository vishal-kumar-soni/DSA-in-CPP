//  [
//     [1,  2,  3,  4],
//     [5,  6,  7,  8], 
//     [9,  10, 11, 12],
//     [13, 14, 15, 16]  ] 

#include<iostream>
#include<vector>
using namespace std;

int diagonalSumDiff(vector<vector<int>>arr){
    int n = arr.size();
   int diagSum1 = 0;
   int diagSum2 = 0;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i==j){
                diagSum1+=arr[i][j];
            }else if(i+j==n-1){
                diagSum2+=arr[i][j];
            }
        }
    }

    return (diagSum2-diagSum1);
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},{15,6,27,28},{9,10,11,12},{13,14,15,16}}; 

    cout<<diagonalSumDiff(arr);

    return 0;
}