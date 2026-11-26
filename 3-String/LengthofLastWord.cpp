// Leetcode 58

#include<bits/stdc++.h>
using namespace std;

int lengthOfWord(string str){
    int j = str.size()-1;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]!=' '){
            j = i;
            break;
        }
    }

    int count = 0;
    for(int i=j;i>=0;i--){
        if(str[i]==' '){
            break;
        }else{
            count++;
        }
    }
    return count;
}

int main(){
    string str = "   fly me   to   the moon  ";
    cout<<lengthOfWord(str);

    return 0;
}