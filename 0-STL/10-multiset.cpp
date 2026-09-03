#include <bits/stdc++.h>
using namespace std;
int main()
{

    //===================================================================//

    //---------- creation  of multiset----------//

    // multiset<int> ms = {10, 20, 20, 30, 20};
    multiset<int> mst;

    mst.insert(10);

    mst.insert(20);
    mst.insert(20); // multiset can stores duplicates
    mst.insert(20);

    mst.insert(30);
    mst.insert(40);
    mst.insert(50);
    mst.insert(60);

    //==============================================================//

    //--------- Deletion of multiset---------//

    mst.erase(30); // --> If I use erase() it will delete all the occurence of 30

    mst.erase(mst.find(30)); // It erases only the address of 30

    // delete number of occurence of any element 
    int toDelete = 2;

    auto it = mst.find(20);
    while (it != mst.end() && toDelete--){
        it = mst.erase(it); // erase returns next iterator
    }

    //==============================================================//

    //------ Other functins in set---------//

    mst.size();

    mst.begin();

    mst.end();

    mst.empty();

    mst.swap(mst);

    int a = mst.count(20); //--> If 20 exist , return 1 else 0
    cout << a;

    for (int x : mst){
        cout << x << " ";
    }

    auto ite = mst.find(10);
    cout << *ite;

    return 0;
}