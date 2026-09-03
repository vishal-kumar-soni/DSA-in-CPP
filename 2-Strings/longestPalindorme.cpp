#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {

    unordered_map <char, int> map; //SC = O(n)

    for(int i=0;i<s.size();i++){ // TC= O(n)
        map[s[i]]++;
    }

    int count=0;
    bool isCenter = false;
    for(auto it:map){ //TC=O(n)
        if(it.second==1) isCenter = true;
        if(it.second%2==0){
            count+=it.second;
        }else{
            count+=it.second-1;
            isCenter=true;
        }
    }

    if(isCenter) count+=1;
    return count;
}

int main(){
    string str = "aabbcbadac";

    cout<<longestPalindrome(str);

    return 0;
}