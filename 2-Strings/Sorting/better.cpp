#include<bits/stdc++.h>
using namespace std;
string sort(string str){
  sort(str.begin(), str.end());

  return str;
}
int main(){
    string str = "edcab";
    cout<<sort(str);
    return 0;
}

// TC=O(nlogn)
// SC=O(n) - Uses O(log n) extra space due to recursion stack