#include<bits/stdc++.h>
using namespace std;

vector<int> factors(int x){
    vector <int> vec;
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0){
            vec.push_back(i);
                if(x/i!=i){
                vec.push_back(x/i);
            }
        }
    }
    return vec;
}

int findHCF(int a , int b){
  
    vector<int> f = factors(a);
    vector<int> g = factors(b);
    
    int ans=0;
    for (int i = 0; i < f.size(); i++){
        for (int j = 0; j < g.size(); j++){
            if(f[i]==g[j]){
                ans=max(ans,f[i]);
            }
        }
    }
    return ans;
}

int main(){
    cout<< findHCF(20,40);
    return 0;
}