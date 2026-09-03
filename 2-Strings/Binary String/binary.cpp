#include<iostream>
using namespace std;

int binary(string str){

    int count=0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='0') i++;
        for(int j=i+1;j<str.size();j++){
            if(str[i]=='1' && str[i]==str[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
  string str = "1111";

  cout<<binary(str);
}