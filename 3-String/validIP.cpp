// GFG - Valid IP address

#include<bits/stdc++.h>
using namespace std;

bool isNumber(char ch){
    if(ch>='0' && ch<='9')return true;
    return false;
}

bool isValidNumber(string s){
    if (s.size() > 1 && s[0] == '0') {
        return false;
    }

    for (char ch : s) { // TC=O(3)
        if (!isdigit(ch)) return false;
    }

    return true;
}

bool validIp(string str){
    if(str[0]=='.') return false; // IP cannot start with .
    int i = 0;
    int countNum = 0; // This count the number of octets, an IP address can have 4
    while(i<str.size()){ // TC=O(n)
        if(isNumber(str[i])){
            int j = 0;
            string num;
            while(j<3 && isNumber(str[i])) {
                num.push_back(str[i]);
                j++;
                i++;
            }
            if(j==3 && isNumber(str[i])){
                num.push_back(str[i]);
                i++;
            }
            if(stoi(num)<0 || stoi(num)>255 || !isValidNumber(num) ){ // num is each octet, it can have range between 0-255, octet is a valid number
                return false;
            }else{
                countNum++;
            }
        }else {
            if(str[i]!= '.' || str[i-1]=='.' || str[i+1]=='.') { // once only one dot can exist
                return false;
            }else{
                i++;
            }
        }
        if(countNum>4) return false;

    }
    if(countNum!=4) return false;


    return true;
}

int main(){
    string str = "192.168.0.1";

    cout<<validIp(str);
    return 0;
}

// TC=O(n)
// SC=O(1)