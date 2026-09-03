#include <bits/stdc++.h>
using namespace std;
int main(){

    list<int> lis;
    lis.push_back(12);
    lis.push_back(13);
    lis.push_back(14);
    lis.push_back(15);
    lis.push_back(16);

    lis.push_front(11); // add new elements from front
  

    for(auto i:lis){
        cout<<i<<" ";
    }
    cout<<endl;

    lis.pop_front();
    cout<<"Elements after pop - ";
    for(auto i:lis){
        cout<<i<<" ";
    }

    return 0;
}