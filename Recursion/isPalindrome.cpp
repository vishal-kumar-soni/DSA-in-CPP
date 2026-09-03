#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i ,int j){
   if(str[i]!=str[j]) return false;
   if(i>=j) return true;
   return isPalindrome(str, i+1, j-1);
}

int main(){
    string str= "psvnnnsp";
    int n = str.size();
    cout<<isPalindrome(str, 0, n-1);
    return 0;
}
