#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int pivot = i + 1;
        int count = 0;

        int j = pivot-1;
        while (j>=0){
            if (arr[pivot] < arr[j]){
                swap(arr[pivot], arr[j]);
                pivot = j;
            }
            j--;
        }
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    insertionSort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}