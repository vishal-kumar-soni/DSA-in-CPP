#include<bits/stdc++.h>
using namespace std;

int conversion(string str){
    unordered_map <char, int> map;
    for(int i=0;i<str.size();i++){
        map[str[i]]++;
    }

    if(map['#']==map['*']) return 0;
    else if(map['*']>map['#']) return map['*'] - map['#'];
    else return (map['*']-map['#']);
}

int main(){

    string str;
    getline(cin, str);

    int ans = conversion(str);
    cout<<ans;
    return 0;
}