// Leetcode 389

#include<bits/stdc++.h>
using namespace std;

char Difference(string s, string t){
    vector<int> arr(26, 0);
    for(int i=0;i<t.size();i++){
        arr[t[i] - 'a']++;
    }
  
    for(int i=0;i<s.size();i++){
        arr[s[i] - 'a']--;
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
           char res = char('a' + i);
           return res;
        }
    }
}

int main(){
  string s = "abcd";
  string t = "acbdd";

  cout<<Difference(s, t);

  return 0;
}
