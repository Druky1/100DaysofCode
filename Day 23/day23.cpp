// Selection Sort
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i<n-1; i++){
        int current_min = i;

        for(int j = i; j<n; j++){
            if(arr[j] < arr[current_min]){
                current_min = j;
            }
        }
        swap(arr[current_min], arr[i]);

    }

}
