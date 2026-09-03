/* arr=[
        [11, 4, 9],     --> sum is 24   
        [14, 1 ,8],     --> sum is 23
        [6, 11, 19],    --> sum is 36
        [10, 21, 0]     --> sum is 31
       ]
        
    The maximum of all the row sum is assigned in maxSum - 36
*/

#include<iostream>
#include<vector>
using namespace std;

int maxRowSum(vector<vector<int>>&arr){
   int rows = arr.size();
   int cols = arr[0].size();

   int maxSum = 0;
   
   for(int i=0;i<rows;i++){
        int rowSum = 0;
        for(int j=0;j<cols;j++){
           rowSum+=arr[i][j];
        }
        maxSum=max(maxSum, rowSum);
    }

    return maxSum;
}

int main(){
    vector<vector<int>> arr = {{11, 4, 9},{14, 1 ,8},{6, 11, 19},{10, 21, 0}};

    cout<< maxRowSum(arr);
    return 0;
}