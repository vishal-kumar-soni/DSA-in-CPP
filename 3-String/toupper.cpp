// Convert whole string into uppercase

#include<bits/stdc++.h>
using namespace std;

string upperCase(string &str){
 
    for(char &chh :str){
        chh=toupper(chh); // convert each character into upper case
    }
    return str; 
}

int main(){
    string str = "computer Science %^&";

    cout<<upperCase(str);

    char ch = 'm';
    char upper = ch - ('a' - 'A');
    cout<<upper;


    return 0;
}