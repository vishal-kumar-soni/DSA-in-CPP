#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int num){

    int original = num;
    int digits = 0;
    while (num > 0){ //TC O(log n)
        num = num / 10;
        digits++;
    }
    num = original;

    int ans = 0;
    while (num > 0){  //TC O(log n)
        int power=1;
        int last=num%10;
        for(int i=0;i<digits;i++){
            power=power*last;
        }
        ans=ans+power;
        num=num/10;
    }
     
    if(original==ans) return true;
    return false;
}

int main(){
    cout << isArmstrong(370) << endl;
    return 0;
}