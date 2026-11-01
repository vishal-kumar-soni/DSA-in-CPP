#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string str){
    
    vector<int> arr(26, 0); //SC=O(26)
    
    for(int i=0;i<str.size();i++){ //TC=O(n)
        int index = tolower(str[i])-'a';        
        arr[index] = 1;
    }

    for(int i=0;i<arr.size();i++){ //TC=O(26)
        if(arr[i]==0) return false;
    }

    return true;

}

int main(){
    string str = "Qwertyuioplkjhgfdsazxcvbnm";

    cout<<checkIfPangram(str);
    
    return 0;
}

// TC=O(n)
// SC=O(1)