#include<bits/stdc++.h>
using namespace std;

int minimumIdx(string &str1, string &str2){
    unordered_map<char, int> mpp;

    int m = str1.size();
    int n = str2.size();

    for(int i=0;i<n;i++){
        mpp[str2[i]]=i;
    }

    for(int i=0;i<m;i++){
        if(mpp.find(str1[i])!=mpp.end()){
            return i;
        }
    }
    return -1;
}

int main(){
    string str1 = "duxwfnfo";
    string str2 = "wfn"; // output: 0

    cout<<minimumIdx(str1,str2);

    return 0;
}