#include<bits/stdc++.h>
using namespace std;

bool Anagram(string str1,string str2){
    if(str1.size()!=str2.size()) return false;

    unordered_map<char, int> map;
    for(int i=0;i<str1.size();i++){
        map[str1[i]]++;
    }

    for(int i=0;i<str2.size();i++){
        if(map.count(str2[i])){
            map[str2[i]]--;
        }else{
            return false;
        }
        if(map[str2[i]]<0) return false;
    }

    return true;
}

int main(){
     
    string str1 = "bc";
    string str2 = "ad";

    cout << Anagram(str1, str2);

    return 0;
}