// Convert whole string into lowercase

#include<bits/stdc++.h>
using namespace std;

string lowerCase(string &str){
 
    for(char &chh :str){
        chh=tolower(chh); // convert each character into lower case
    }
    return str; 
}

int main(){
    string str = "COMPUter SCIencE %^&";

    cout<<lowerCase(str);

    return 0;
}