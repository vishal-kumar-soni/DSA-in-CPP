#include<bits/stdc++.h>
using namespace std;
int i=0;
void func(){
   if(i==4) return;
   i++;
   cout<<i<< " ";
   func();
}
int main(){
    func();
    cout<<"done";
    return 0;
}