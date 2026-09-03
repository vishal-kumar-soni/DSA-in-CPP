#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;

    mp["pen"]=5;
    mp["copy"]=10;
    mp["laptop"]=200;
    mp["book"]=150;
    mp["table"]=120; 
   
    // Insertion
    mp.insert({"bottle",40});

    // Deletion
    mp.erase("copy");
 
    // Printing all the values
    for(auto i:mp){
        cout<< i.first <<" - " << i.second<< endl;
    }


    cout<< "The count of pen is " << mp.count("pen") <<endl;
    
    cout<< "prize of book is "<< mp["book"] <<endl;

    if(mp.find("bottle") != mp.end()){
        cout<<"Bottle is present\n";
    }else{
        cout<< "Bottle is not present\n";
    }

    cout<< "the size of map is " << mp.size() <<endl;

    
    return 0;
}