/* arr=[
        [11, 4, 9],    
        [14, 1 ,8],  
        [6, 11, 19], 
        [10, 21, 0] ]
         |   |   |
         |   |   |

 sum is- 41  37  36  
     
        
    The maximum of all the column sum is assigned in maxSum - 41
*/


#include<iostream>
#include<vector>
using namespace std;

int MaxMin(vector<vector<int>>&arr){
   int rows = arr.size();
   int cols = arr[0].size();

   int maxSum = 0;
   
   for(int i=0;i<cols;i++){
        int colSum = 0;
        for(int j=0;j<rows;j++){
            colSum+=arr[j][i];
        }
        maxSum=max(maxSum, colSum);
    }

    return maxSum;
}

int main(){
    vector<vector<int>> arr = {{11, 4, 9}, {14, 1 ,8}, {6, 11, 19}, {10, 21, 0}};

   int ans =  MaxMin(arr);

    cout<<"The cols sum is "<<ans;


    return 0;
}