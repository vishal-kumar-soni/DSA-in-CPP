#include <bits/stdc++.h>
using namespace std;

string AddStrings(string str1, string str2){

    int inHand = 0;
    string res = "";

    int i = str1.size() - 1;
    int j = str2.size() - 1;
    while (i>=0 && j>=0){ // TC=O(n)

        int sum = ((str1[i] - '0') + (str2[j] - '0')) + inHand;
        inHand = sum / 10;

        char ch = '0' + sum % 10;
        res.push_back(ch);
        i--;
        j--;
        
    }
    while(i>=0){ // TC=O(m-n)
        int sum = (str1[i] - '0') + inHand;
        inHand = sum / 10;
        char ch = '0' + sum % 10;
        res.push_back(ch);
        i--;

    }
    while(j>=0){ 
        int sum = (str2[j] - '0') + inHand;
        inHand = sum / 10;
        char ch = '0' + sum % 10;
        res.push_back(ch);
        j--;
    }
    if(inHand!=0){
        char last = '0' + inHand;
        res.push_back(last);
    }
    
    reverse(res.begin(),res.end()); // TC=O(n)

    return res;
}

int main(){
    string str1 = "543";
    string str2 = "12345";

    cout << AddStrings(str1, str2);
}

// TC = O(n)
// SC = O(n)