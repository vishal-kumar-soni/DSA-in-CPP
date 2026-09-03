#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={2,1,3,4,2,3,1,1,2,6};
    map<int,int> mp;

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto i :mp){
        cout<<i.first<< " " <<i.second<<endl;
    }
     
    return 0;
}
