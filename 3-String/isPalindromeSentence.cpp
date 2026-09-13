#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str){

    for(char &ch:str){
        ch = tolower(ch);
    }

    int i=0;
    int j=str.size()-1;

    while(i<=j){

        if(str[i]<'a' || str[i]>'z'){
            i++;
        }else if(str[j]<'a' || str[j]>'z'){
            j--;
        }else if(str[i]==str[j]){
            i++;
            j--;
        }else{
            return false;
        }
    }

   return true;
}

int main(){
    string str = "OP";

    cout<<isPalindrome(str);

    return 0;
}