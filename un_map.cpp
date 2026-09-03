#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={3,5,4,3,3,4,1};
    
    unordered_map<int,int> unm;
    for(int i=0;i<7;i++){
      unm[arr[i]]++;
    }

    for(auto it:unm){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}