#include<iostream>
using namespace std;

bool isPalindrome(int a){
    int original=a;

    int last=0;
    int reverse=0;
    while(a>0){
        last=a%10;
        reverse=reverse*10+last;
        a=a/10;
    }

    if(original==reverse)return true;
    return false;
    
}
int main(){
   cout<< isPalindrome(123321); // 1 if true , 0 if false
 
    return 0;
}