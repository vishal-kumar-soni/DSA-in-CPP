#include<iostream>
#include<vector>

using namespace std;
int largestNumber(vector<int>arr ){
    int n= arr.size();
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large) large=arr[i];
    }
    return large;
}
int main(){
   vector<int>arr={1,2,3,4,5,6,4};

   int ans = largestNumber(arr);
   cout<<ans;
}