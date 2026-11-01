// A "Panagram" is a sentence containing every letter in English Alphabet either in lowercase or 
// Uppercase.

#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str){
    unordered_map<char,int> map; // SC=O(26)

    for(int i=97;i<=122;i++){ //TC=O(26)
        map[i] = char(i);
    }

    for(int i=0;i<str.size();i++){ //TC=O(n)
        if(map.find(tolower(str[i]))!=map.end()){
            map.erase(tolower(str[i]));
        }
    }

    if(map.size()>=1) return false;
    return true;
}

int main(){
    string str = "Qqwertyuioplkjhgfdsazxcvbnm";

    cout<<checkIfPangram(str);
    
    return 0;
}

// TC=O(n)
// SC=O(1)