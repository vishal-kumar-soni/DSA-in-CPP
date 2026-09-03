#include<bits/stdc++.h>
using namespace std;

 
int main(){
   
    string str;
    getline(cin, str);

    stringstream ss(str);
    vector<int> arr;

    string temp;
    while(getline(ss, temp,' ')){
        int val = stoi(temp);
        arr.push_back(val);
    }
  
    int currSum =0;
    int maxSum =0;
    int i=0;
    while(i<arr.size()){
        currSum+=arr[i];
        if(currSum <0) currSum = 0;
        if(currSum>maxSum ){
           maxSum = currSum;
        }
        i++;
    }

    cout<<maxSum;

    return 0;
}  