// You have given two sorted arrays arr1[] & arr2[] of distinct elements. The
// first array has one element extra added in between.Return the index of the
// extra element.



#include<iostream>
#include<vector>
using namespace std;

int elementEQIdx(vector<int>&arr1, vector<int>&arr2 ){
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]!=arr2[i]){
            return i;
        }
    }
}

int main(){
    vector<int> arr1={2,4,6,8,9,10,12};
    vector<int> arr2={2,4,6,8,10,12};

    int res = elementEQIdx(arr1, arr2);
    cout<<res;
   
    return 0;
}