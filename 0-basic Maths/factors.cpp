#include<bits/stdc++.h>
using namespace std;
void factors(int num){
    vector<int> vec;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            vec.push_back(i);
        }
    }
    cout<<"Factors are- ";
    for(auto i:vec){
        cout<<i<< " ";
    }
  
}
int main(){
    factors(36); //TC O(n)
   
    return 0;
}