#include<iostream>
using namespace std;

string maxOdd(string &str){
    
    string res="";
    for(int i=str.size()-1;i>=0;i--){  //TC=O(n)
        int num = str[i] - '0';
        if(num%2!=0){
            int j=0;
            while(j<=i){ // or TC=O(n)
                res.push_back(str[j]);
                j++;
            }
            break;
        }
    }

    return res;
}

int main(){
   string str = "6054";
   cout<<maxOdd(str);

    return 0;
}

// TC=O(n)
// SC=O(1)