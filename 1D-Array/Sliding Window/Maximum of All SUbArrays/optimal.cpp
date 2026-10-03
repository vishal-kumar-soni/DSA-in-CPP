#include<bits/stdc++.h>
using namespace std;

// Maximum of all sub array
vector<int> MaximumSubArray(vector<int>&arr, int k){
    vector<int> res; //SC=O(n)
    int large = arr[0];
    int secondLarge = INT_MIN;
    
    int i =0;
    int j =0;
    while(j<arr.size()){ // TC=O(n)

        while(j<k){
            if(arr[j]>large){
                secondLarge = large;
                large = arr[j];
            }else if(arr[j]>secondLarge && arr[j]!=large){
                secondLarge = arr[j];
            }
            if(j==k-1){
                break;
            }
            j++;
        }
        if(j==k-1){
            res.push_back(large);
            if(arr[i]==large){
                large = secondLarge;
            }
            i++;
            j++;
        }else{
            if(large >= arr[j]){
                if(arr[j]>secondLarge){
                    secondLarge = arr[j];
                }
                res.push_back(large);
                if(arr[i]==large){
                    large = secondLarge;
                }
            }else{
                secondLarge = large;
                large = arr[j];
                res.push_back(large);
                if(arr[i]==large){
                   large = secondLarge;
                }

            }
            i++;
            j++;
        }
    }
    return res;
}

int main(){
    vector<int> arr = {120, -1, 17, 8, -16, 20, 23, 1}; //120 17 17 20 23 23  
    int k =3;

    vector<int> res = MaximumSubArray(arr, k);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(n)
// SC=O(n)