#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str){
    unordered_map<char, int> map;

    for (int i = 0; i < str.size(); i++){
        map[str[i]]++;
    }
    cout << "the size " << map.size() << endl;
    for (auto it : map){
        cout << it.first << " " << it.second << endl;
    }

    if (map.size() < 26) return false;
    return true;
}

int main(){
    string str = "thequickbrownfoxjumpsoverthelazydog";

    cout << checkIfPangram(str);

    return 0;
}