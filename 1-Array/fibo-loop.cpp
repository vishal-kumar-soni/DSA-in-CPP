#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int x){
    int prev2=0;
    int prev1=1;

    if(x==0) return 0;
    if(x==1) return 1;

    int res=0;

    for(int i=1;i<x;i++){
        res=prev2+prev1;

        prev2=prev1;
        prev1=res;

    }
    return res;
   
}

int main(){
   int x;
   cin>>x;
   
   int ans = fibonacci(x);
   cout<<ans;
}