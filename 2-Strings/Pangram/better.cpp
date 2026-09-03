#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str){
    
    int arr[26]={0};

    for(int i=0;i<str.size();i++){
        int index = str[i]-'a';

        arr[index] = 1;
    }

    for(int i=0;i<26;i++){
        if(arr[i]==0) return false;
    }
    return true;

}

int main(){
    string str = "thequickbrownfoxjumpsoverthelazydog";

    cout<<checkIfPangram(str);
    
    return 0;
}