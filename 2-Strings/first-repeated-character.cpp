// Given a string s. The task is to find the first repeated character in it. We need to
// find the character that occurs more than once and whose index of second occurrence is
// smallest. s contains only lowercase letters.

#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

char firstRepeated(string arr){
   
   unordered_map<char,int> mpp;
   for(int i=0;i<arr.size();i++){
        if(mpp.find(arr[i])!=mpp.end()){
            return arr[i];
        }else{
            mpp[arr[i]]++;
        }
   }
    return -1;
}

int main(){
    string s = "vishalthecoder";

    char ans = firstRepeated(s);
    cout<<ans;

    return 0;
}
