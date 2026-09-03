#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> um; // stores unique key unorderdly

    um.insert({2,4});
    um.emplace(2,4);
    um.insert({3,9});
    um.insert({5,25});
    um.insert({4,16});
    um.emplace(7,49);

    um.erase(3);

    if(um.find(5) != um.end()){
        cout<<"square of 5 is present\n";
    }else{
        cout<< "square of 5 is not present\n";
    }


    cout<< "The size of unordered_map is" << um.size() <<endl;

    auto it = um.find(4);  // it.first -> it.second
    cout<< it->first << " is " << it->second << endl;

    for(auto it:um){
        cout<<"The square of "<< it.first<<" is "<<it.second<<endl;
    }
    return 0;
}