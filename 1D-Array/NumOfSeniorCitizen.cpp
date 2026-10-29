// Leetcode 2678

#include<bits/stdc++.h>
using namespace std;

int calculate(vector<string>&arr){
    int count = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]=='M' || arr[i][j]=='F' || arr[i][j]=='O'){
                string age;
                age.push_back(arr[i][j+1]);
                age.push_back(arr[i][j+2]);
                int ageNum = stoi(age);
                if(ageNum>60){
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}

int main(){
    vector<string> arr = {"7868190130M7522","5303914400F1211","9273338290F4010"};
    cout<<calculate(arr);

    return 0;
}