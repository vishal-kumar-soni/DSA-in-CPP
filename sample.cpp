#include<bits/stdc++.h>
using namespace std;

int charToInteger(char ch){
    if(ch == '1') return 1;
    else return 0;
}

char integerToChar(int x){
    if(x == 1) return '1';
    else return '0';
}

int main(){
    
  list<int> arr;
  arr.push_front(12);
  arr.push_front(13);
  arr.push_front(14);
  arr.push_front(15);

  for(auto it:arr){
    cout<<it<<" ";
  }
    
    return 0;
}
