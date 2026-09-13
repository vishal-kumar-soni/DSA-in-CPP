// Given a string s without spaces, a character ch and an integer count. Your
// task is to return the substring that remains after the character ch has
// appeared count number of times.
// Note:  Assume upper case and lower case alphabets are different. “”(Empty
// string) should be returned if it is not possible, or the remaining substring
// is empty.


#include<bits/stdc++.h>
using namespace std;

string remaining(string str, char ch, int count){
    string res = "";
    int cnt=0;
    for( int i=0;i<str.size();i++){
        if(str[i]==ch){
            cnt++;
        }

        if(cnt==count){
            i++;
            while(i<str.size()){
                res+=str[i];
                i++;
            }
            break;
        }
    }
    return res;
}

int main(){
    string str = "Thisisdemostring";
    char ch = 's';
    int count = 2;
    cout<<remaining(str,ch,count)<<endl;
    return 0;
}