// Leetcode 415

#include<bits/stdc++.h>
using namespace std;

string AddStrings(string num1, string num2){

    int firstNum=0;
    for(int i=0;i<num1.size();i++){
        int num = num1[i] - '0';
        firstNum = firstNum*10 + num;
    }

    int secondNum=0;
    for(int i=0;i<num2.size();i++){
        int num = num2[i] - '0';
        secondNum = secondNum*10 + num;
    }

    return to_string(firstNum + secondNum);
}
  
int main(){
     
    string str1 = "11";
    string str2 = "123";

    cout << AddStrings(str1, str2);

    return 0;
}