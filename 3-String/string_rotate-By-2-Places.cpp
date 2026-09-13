#include<bits/stdc++.h>
using namespace std;

bool rotateFirst(string str1, string str2){
    string ans = "";

    for(int i=2;i<str1.size();i++){
       ans.push_back(str1[i]);
    }

    for(int i=0;i<2;i++){
      ans.push_back(str1[i]);
    }


    cout<<ans<<endl;
    if(ans==str2) return true;
    return false;

}
bool rotateLast(string str1, string str2){
   string ans = "";

   
   for(int i=str1.size()-2;i<str1.size();i++){
      ans.push_back(str1[i]);
   }

   for(int i=0;i<=str1.size()-3;i++){
      ans.push_back(str1[i]);
   }
    
    cout<<ans<<endl;
    if(ans==str2) return true;
    return false;
}

bool isRotated(string str1, string str2){

    if(rotateFirst(str1, str2 ) || rotateLast(str1, str2)) return true;
    return false;
}

int main(){
    string str1 = "amazon";
    string str2 = "azonam";

    cout<<isRotated(str1, str2 );

    return 0;
}