#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int num){
   int original = num;
   int digits = 0;
   while (num > 0){
      num = num / 10;
      digits++;
   }
   num = original;

   int ans = 0;
   while (num > 0){
      int last = num % 10;
      ans = ans + (int)(pow(last, digits) + 0.5);
      num = num / 10;
   }

   if (original == ans) 
      return true;
      return false;
}

int main(){
   int n;
   cin>>n;

   cout << isArmstrong(n) << endl;
   return 0;
}