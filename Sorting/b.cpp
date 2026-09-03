#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={4, 2, 3, 1, 5};


    int j=0;
    while(j<arr.size()-1){
        int i=0;
        while(i<arr.size()-j-1){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
            i++;
        }
        j++;
    }

    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}