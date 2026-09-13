#include<bits/stdc++.h>
using namespace std;

string removeChars(string str1, string str2 ){
   unordered_map <int,int> mpp ;
   string res  = "";
   
   string large,small;
    if(str1.size()>str2.size()){
        large = str1;
        small = str2;
    }else{
        small = str1;
        large = str2;
    }

    for(int i=0;i<small.size();i++){
        mpp[small[i]]++;
    }

    for(int i=0;i<large.size();i++){
        if(mpp.find(large[i])==mpp.end()){
           res.push_back(large[i]);
        }
    }

    return res;
}

int main(){
    string str1 = "computer";
    string str2 = "cat";

   cout<< removeChars(str1, str2);
    
    return 0;
}