#include <bits/stdc++.h>
using namespace std;
int main(){

//===================================================================//
   
   //---------- creation  of set----------//
    
    // set<int> ms = {10, 20, 20, 30, 20};

    set<int> st;

    st.insert(10);

    st.insert(20);
    st.insert(20); // Set stores only unique number not duplicate
    st.insert(20);

    st.insert(30);
    st.insert(40);
    st.insert(50);
    st.insert(60);
    st.insert(70);
    st.insert(80);

//==============================================================//

    //--------- Deletion of set---------//

    st.erase(30); // --> Delete 30 and maintain the sorted order,but takes logarithmic time

    // This takes constant time complexity
    auto val = st.find(30);
    st.erase(val);
    
    //  {1, 2, 3, 4, 5, 6}
    auto val1 = st.find(2);
    auto val2 = st.find(5);
    st.erase(val1,val2); // {1, 5 ,6}

//==============================================================//

    //------ Other functins in set---------//

    st.size();

    st.begin();

    st.end();

    st.empty();

    st.swap(st);


    int a = st.count(20); //--> If 20 exist , return 1 else 0
    cout<<a;

    for (int x : st){
        cout << x << " ";
    }

    auto ite = st.find(10);
    cout<< *ite;

    return 0;
}