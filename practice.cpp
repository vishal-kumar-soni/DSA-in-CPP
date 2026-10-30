#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string str){
   unordered_map<char, int> map;

    for(int i=0;i<str.size();i++){
       map[str[i]]++;
    }

    int count = 0;
    bool mid = true;
    for(auto it: map){
        if(it.second%2==0){
            count+=it.second;
        }else if((it.second%2!=0) && mid){
            count+=it.second;
            mid = false;
        }
    }
    return count;
}

int main(){
     
    string str = "aabbcbadac";

    cout<<longestPalindrome(str);

    return 0;
}