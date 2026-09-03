// Given an array of positive integers. This function returns all the
// leaders in the array. An element is considered a leader if it is
// greater than or equal to all elements to its right. The rightmost element
// is always a leader.


#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<int> findUnique(vector<int>&arr ){
    int lastMax=0;
    list<int> li;
    vector<int> ans;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]>=lastMax){
           li.push_front(arr[i]);
           lastMax=arr[i];
        }
    }
    for(auto it:li){
        ans.push_back(it); 
    }
    return ans;
}

int main(){
    vector<int> arr={10, 4, 2, 4, 1}; // [10, 4, 4, 1]

    vector<int> res = findUnique(arr);
    for(auto it:res){
        cout<<it<< " ";
    }
   
    return 0;
}