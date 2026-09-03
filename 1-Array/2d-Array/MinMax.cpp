#include<iostream>
#include<vector>
using namespace std;

vector<int> MaxMin(vector<vector<int>>&arr){
   int rows = arr.size();
   int cols = arr[0].size();

   int max = arr[0][0];
   int min = arr[0][0];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }else if(arr[i][j]>=max){
                max = arr[i][j];
            }
        }
    }

    return {max,min};
}

int main(){
    vector<vector<int>> arr = {{11, 62, 83, 55}, {18, 96, 17, 81}, {95, 110, 101, 12}};

    vector<int> ans =  MaxMin(arr);

    cout<<"The larget no. is "<<ans[0]<<endl;
    cout<<"The smallest no. is "<<ans[1];


    return 0;
}