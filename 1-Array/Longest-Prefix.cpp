#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    sort(strs.begin(), strs.end());
 
    int i=0;
    int j=0;
    string res="";
    while(i<strs[0].size() && j<strs[n-1].size()){
        if(strs[0][i] == strs[n-1][j]){
            res+=strs[0][i];
            i++;
            j++;
        }else{
            break;
        }

    }
    return res;
}
int main(){
    vector<string> arr = {"flower","flow","flight"};
   
    cout<<longestCommonPrefix(arr);
    return 0;
}