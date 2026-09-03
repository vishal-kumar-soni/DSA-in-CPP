#include<bits/stdc++.h>
using namespace std;

string defangig(string str){
   string res = "";

   for(int i=0;i<str.size();i++){
        if(str[i]!='.'){
            res.push_back(str[i]);
        }else{
            res.push_back('[');
            res.push_back('.');
            res.push_back(']');
        }
   }
   return res;
}

int main(){

    string str = "255.100.25.60";

    cout<<defangig(str);
    
    return 0;
}