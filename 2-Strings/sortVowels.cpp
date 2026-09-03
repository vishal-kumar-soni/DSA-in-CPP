#include<bits/stdc++.h>
using namespace std;

string sortString(string str){
 
   map<char,int> mpp; // SC=O(n)

    for(int i=0;i<str.size();i++){ // TCO(n)
        mpp[str[i]]++;
    }

    str ="";  
    for(auto it:mpp){ // TC=O(n)
        if(it.second==1){
            str.push_back(it.first);
        }else{
            int i=1;
            while (i<=it.second){
                str.push_back(it.first);
                i++;
            }
        }
    }
   return str;
}

bool isVowel(char ch){
   if(ch=='a'|| ch=='e'|| ch=='i' || ch=='i' || ch=='o' || ch=='u'|| 
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
    {
        return true;
    }
    return false;
}
string sortVowels(string str){
   string res = ""; //TC=O(n)

    for(int i=0;i<str.size();i++){ // TC=O(n)
        if(isVowel(str[i])){
            res.push_back(str[i]);
        }
    }

    string sortedRes = sortString(res); //TC=O(n) SC=O(n)

    for(int i=str.size()-1;i>=0;i--){ //TC=O(n)
        if(isVowel(str[i])){
            char ch = sortedRes.back();  // store last character
            sortedRes.pop_back();   
            str[i] = ch;
        }
    }

    return str;
   
}

int main(){
    string str = "UpjPbEnOj";
    cout<<sortVowels(str);
    return 0;
}

// TC=O(n)
// SC=O(n)