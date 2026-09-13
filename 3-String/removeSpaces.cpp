#include<iostream>
using namespace std;

string removeSpaces(string &str){

    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str.erase(i,1);
            i--;
        }
    }

    return str;
}

int main (){
    string str = "cat paws claws";

    cout<<removeSpaces(str);
    return 0;
}