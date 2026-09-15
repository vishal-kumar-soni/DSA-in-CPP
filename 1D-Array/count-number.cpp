#include<bits/stdc++.h>
using namespace std;

int countNumber(vector<int>&arr , int a , int b){
   int start = -1;
    for(int  i =0;i<arr.size();i++){
        if(arr[i]==a){
            start= i;
            break;
        }
    }

   int end = -1;
    for(int  i = arr.size();i>=0;i--){
        if(arr[i]==b){
            end= i;
            break;
        }
    }

    if(start>=end) return 0;
    return (end-start)-1;
}

int main(){
    vector<int> arr = {3,7,6,17,1,8,7,18};
    int a = 7;
    int b = 18;

    cout<<countNumber(arr, a, b);

    return 0;
}