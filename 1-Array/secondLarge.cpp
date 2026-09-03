#include<iostream>
#include<vector>
using namespace std;

int largestNumber(vector<int> &arr ){
   int n = arr.size();
   int large=arr[0];
   int sLarge = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>large){
            sLarge=large;
            large=arr[i];
        }

        if(arr[i]!=large && arr[i]>sLarge){
            sLarge=arr[i];
        }
    }

    return sLarge;
}

int main(){
   vector<int>arr={3,5,1,2,4,6};

   int ans = largestNumber(arr);
   cout<<ans;
}