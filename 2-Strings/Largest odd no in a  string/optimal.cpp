#include <iostream>
using namespace std;

string maxOdd(string &str){
    int n = str.size();
    int lastOdd  = -1;
    for(int i=n-1;i>=0;i--){
        int charNum = str[i]-'0';

        if(charNum%2!=0){
            lastOdd = i;
            break;
        }

    }
    if(lastOdd==-1) return "";

    str.erase(lastOdd+1,(n-1)-lastOdd);

    return str;
    
}
int main(){
    string str = "6202";

   cout<<maxOdd(str);

    return 0;
}