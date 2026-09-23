// Leetcode 128

#include<bits/stdc++.h>
using namespace std;

int sequence(vector<int>&arr){
    int maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {
        int count = 1;
        int maxNum = arr[i];

        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == maxNum + 1) { // Find next number in sequence
                count++;
                maxNum = arr[j]; // Move to the next expected number
                j = -1; // Restart inner loop to find the next number
            }
        }

        maxLength = max(maxLength, count);

    }

    return maxLength;
}

int main(){
    vector<int> arr = {1,0,1,2};   
    cout<< sequence(arr);
   
    return 0;
}

// TC=O(n*n*n)
// SC=O(1)