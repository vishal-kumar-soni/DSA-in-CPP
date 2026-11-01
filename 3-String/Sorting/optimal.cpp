#include<bits/stdc++.h>
using namespace std;
string sort(string str){
 
   map<char,int> mpp; // SC=O(n)

    for(int i=0;i<str.size();i++){ // TCO(n)
        mpp[str[i]]++; //TC=O(logk)
    }

    string res =""; //SC=O(n)
    for(auto it:mpp){ // TC=O(n)
        if(it.second==1){
            res.push_back(it.first);
        }else{
            int i=1;
            while (i<=it.second){
                res.push_back(it.first);
                i++;
            }
        }
    }
   return res;

}
int main(){
    string str = "ABCabc";
    cout<<sort(str);
    return 0;
}

// TC= O(n*logk) // k = number of distinct characters in the string
// SC= O(n)