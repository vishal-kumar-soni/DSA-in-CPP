#include <bits/stdc++.h>
using namespace std;

int main(){
    // map - Stores unique key orderdly
    map<char, int> mpp = {{'A',97},{'B',98},{'C',99},{'D',100}};

    map<string, int> mp; // This way map is initialize.

    mp["pen"]=5;
    mp["copy"]=10;
    mp["laptop"]=200;
    mp["book"]=150;
    mp["table"]=120; 

    mp.insert({"bottle", 40});  // This way the keys and values are set in map.
    mp.emplace("bench", 500);

    mp["pen"] = 7; // This basically updates the key "pen" from 5 to 7.

    mp.erase("copy"); // This way any key and their value is deleted.
 

    for(auto i:mp){  // Printing all the values, i.first is key and i.second is value.
        cout<< i.first <<" - " << i.second<< endl;
    }


    cout<< "The count of pen is " << mp.count("pen"); // count() is used to find frequency of any perticular key, if the key is not persent in the map it returns 0
    
    cout<< "the size of map is " << mp.size() <<endl; // size() method is used to find the size of map.
    
    mpp.delete();// issue
    if(mp.find("bottle") != mp.end()){
        cout<<"Bottle is present\n";
    }else{
        cout<< "Bottle is not present\n";
    }

    return 0;
}