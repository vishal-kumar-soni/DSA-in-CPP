#include<bits/stdc++.h>
using namespace std;

int main(){

    // stoi(string) - string to integer
    string st = "1234ab";
    int s = stoi(st);
    cout<<s<<" the type is "<<typeid(s).name()<<endl;

    //stol(string) - string to long
    string st1 = "123445532";
    long lg = stol(st1);
    cout<<lg<<" and the type is "<<typeid(lg).name()<<endl;


    //stof (string)- string to float
    string st2 = "12.32";
    float fl = stof(st2);
    cout<<fl <<" and the type is "<<typeid(fl).name() <<endl;
   
    // to_string(integer) integer to string 

    int x = 1990;
    string st3 = to_string(x); // "1990"
    cout<<st3 <<" and the type is "<<typeid(st3).name() <<endl;


    string st4 = "12bv";
    cout<<stoi(st4);
   
    return 0;
}