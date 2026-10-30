// Given a single string s, the task is to check if it is a palindrome sentence or not.
// A palindrome sentence is a sequence of characters, such as word, phrase, or series of symbols that 
// reads the same backward as forward after converting all uppercase letters to lowercase and removing
// all non-alphanumeric characters (including spaces and punctuation).

#include<bits/stdc++.h>
using namespace std;

bool validChar(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='a')  || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}

bool panlindromicSentence(string &str){

    for(char &ch: str){ // TC=O(n)
        ch = tolower(ch);
    }

    int i=0;
    int j=str.size()-1;
    while(i<=j){ //TC=O(n)
       
        while(!validChar(str[i])){
            i++;
        }
        while(!validChar(str[j])){
            j--;
        }
        if(str[i]==str[j]){
            i++;
            j--;
        }else {
            if((i>str.size()-1) || (j<0)) return true;
            return false;
        }
    }
    return true;
}

int main(){
    string str = "Abc 012..## 10cbA";
    cout<<panlindromicSentence(str);

    return 0;
}

// TC=O(n)
// SC=O(1)