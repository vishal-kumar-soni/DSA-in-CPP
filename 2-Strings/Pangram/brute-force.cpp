#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str){
    unordered_map<char,int> map;

    for(int i=97;i<=122;i++){
        map[i] = char(i);
    }

    for(int i=0;i<str.size();i++){
        if(map.find(str[i])!=map.end()){
            map.erase(str[i]);
        }
    }
    for(auto it:map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    if(map.size()>=1) return false;
    return true;
}

int main(){
    string str = "tuickbrownfoxjumpsoverthelazydog";

    cout<<checkIfPangram(str);
    
    return 0;
}