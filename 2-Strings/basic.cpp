#include<iostream>
using namespace std;
int main(){
    string str = "This is string";
    cout<<str<<endl;

    // But
    
    string str2;
    cout<<"enter the string - ";
    getline(cin,str2);

    cout<<str2;
    return 0;
}