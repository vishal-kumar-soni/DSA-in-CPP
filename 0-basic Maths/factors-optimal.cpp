#include<bits/stdc++.h>
using namespace std;
void factors(int num){
    vector<int> vec;
    for(int i=1;i<=sqrt(num);i++){ //TC=O(sqrt(n))
          if(num%i == 0){
            vec.push_back(i);
            if(i!=num/i){
                vec.push_back(num/i);
            }
        }
    }

    sort(vec.begin(),vec.end()); //O(nlog(n))

    cout<<"factors are - ";
    for(auto i:vec){
        cout<<i<< " ";
    }
}
int main(){
    factors(36);  
    return 0;
}