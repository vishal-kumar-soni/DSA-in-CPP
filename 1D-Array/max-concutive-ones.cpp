#include<iostream>
#include<vector>
using namespace std;

int maxOnes(vector<int>&arr ){
    int count=0;
    int maxCount=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }else{
            count=0;
        }
        maxCount=max(count, maxCount);
    }
    return maxCount;
}

int main(){
    vector<int> arr={1,1,1,0,0,0,1,1,1,1,1,0,1};

    int res = maxOnes(arr);
    cout<<res;
   
    return 0;
}