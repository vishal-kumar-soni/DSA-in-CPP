#include<bits/stdc++.h>
using namespace std;

string removeChars(string str1, string str2){
    unordered_map<char, int> map;

    for(int i=0;i<str2.size();i++){
        map[str2[i]]++;
    }

    for(int i=0;i<str1.size();i++){
        if(map.count(str1[i])){
            str1.erase(i, 1);
            i--;
        }
    }

    return str1;
}

int main(){
     
    string str1 = "computer";
    string str2 = "cat";

   cout<< removeChars(str1, str2);

    return 0;
}