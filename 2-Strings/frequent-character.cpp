#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string &str){
    unordered_map<char, int> mpp;

    for (int i = 0; i < str.size(); i++){
        mpp[str[i]]++;
    }

    int max = 0;
    char maxChar = '\0';
    for (auto it : mpp){
        if (it.second > max ||
            (it.second == max && it.first < maxChar)){
            max = it.second;
            maxChar = it.first;
        }
    }
   return maxChar;
}

int main(){
    string str = "oaarqxxvbq";

    cout << "The char is " << getMaxOccuringChar(str) << endl;
    
    return 0;
}