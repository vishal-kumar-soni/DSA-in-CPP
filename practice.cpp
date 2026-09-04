#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
  int ans=1;
   for(int i=0;i<b;i++){
     ans*=a;
   }

   return ans;
}

bool isArmstrong(int n ){
  int ori = n;

  int digit = 0;
  while(n>0){
    n=n/10;
    digit++;
  }

  n=ori;
  int res = 0;
  while(n>0){
    int lastDigit = n%10;
    res = res+power(lastDigit, digit);
    n=n/10;
    cout<<res<<endl;
  }

  cout<< res<<endl;

  if(res==ori)return true;
  else return false;
}

int main(){
  int n ;
  cout<<"enter the number: ";
  cin>>n;

  cout<< isArmstrong(n);
  return 0;
} 