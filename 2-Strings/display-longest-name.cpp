// Given an array arr[] containing strings of names. Our task is to return the
// longest string. If there are multiple names of the longest size, return the
// first occurring name.

#include<iostream>
#include<vector>
using namespace std;

string displayLongest(vector<string>&arr){
    int maxLength = 0;
    string maxString="";

    for(int i=0;i<arr.size();i++){
       int length = arr[i].size();
        if(length>maxLength){
            maxLength=length;
            maxString=arr[i];
        }
    }

    return maxString;
}

int main(){
    vector<string> arr = {"Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks","qqqqqqqqqqqqq"};

    string ans = displayLongest(arr);
    cout<<ans;
    return 0;
}