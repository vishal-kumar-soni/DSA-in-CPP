#include<iostream>
using namespace std;

string maxOdd(string &str){
    
    string res="";
    for(int i=str.size()-1;i>=0;i--){
        int num = str[i] - '0';
        if(num%2!=0){
            int j=0;
            while(j<=i){
                res.push_back(str[j]);
                j++;
            }
            break;
        }
    }

    return res;
}

int main(){
   string str = "604";

   cout<<maxOdd(str);

    return 0;
}