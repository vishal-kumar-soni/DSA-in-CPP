#include <bits/stdc++.h>
using namespace std;
int main(){

//==============================================================//
    // Deletion of vector 

    vector<int> vec;
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    vec.push_back(16);


    vec.erase(vec.begin() + 1, vec.begin() + 4);
    // {12, 13, 14, 15, 16} --> 13, 14, 15 will be deleted

    for (auto i : vec){
        // cout << i << " ";
    }

//==============================================================//

    // Insertion

    vector<int> vect;
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(6);


    vect.insert(vect.begin(), 1);        // Insert 1 at 0th position
    vect.insert(vect.begin() + 1, 3, 0); // Insert 3 time 0 at 1
    for (auto i : vect){
        // cout << i << " ";
    }
 
//==============================================================//

    // Insert some part or whole vector into another vector
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);

    vector<int> v2;
    v2.push_back(200);
    v2.push_back(300);

    v1.insert(v1.begin() + 1, v2.begin(),v2.end());
      for (auto i : v1){
        cout << i << " "; //{2, 200, 300, 3, 4, 5, 6}
    }

 
//==============================================================//

   v1.size();
   v2.size();

   v1.pop_back(); //{2, 200, 300, 3, 4, 5,}

   v1.swap(v2);
   
   v1.clear(); // erase the entire vector

   v1.empty(); // return boolean value 

    return 0;
}