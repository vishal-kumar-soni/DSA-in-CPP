#include<bits/stdc++.h>
using namespace std;

char calculate(string s){
    unordered_map<char, int> map;
    for(char ch:s){
        if(map.count(ch)){
            return ch;
        }else{
            map.emplace(ch, 1);
        }
    }
    return -1;
}

int main(){
    
    string s = "ax";


    cout<<calculate(s);

    return 0;
}