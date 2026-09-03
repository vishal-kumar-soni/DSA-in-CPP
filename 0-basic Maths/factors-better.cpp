#include<bits/stdc++.h>
using namespace std;
void factors(int num){
    vector<int> vec;

    for(int i=1;i<= (num/2);i++){
        if(num%i==0){
            vec.push_back(i);
        }
    }
    vec.push_back(num);

    cout<<"factors are - ";
    for(auto i:vec){
        cout<<i<< " ";
    }
}
int main(){
    factors(12); //O(n/2)
    return 0;
}