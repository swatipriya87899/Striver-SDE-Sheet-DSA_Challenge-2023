#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    int idx=-1;
    for(int i=n-1; i>0; i--){
        if(arr[i]>arr[i-1]){
            idx=i-1;
            break;
        }
    }

    // if the array is in decreasing order
    if (idx == -1) {
       reverse(arr.begin(), arr.end());
       return arr;
    }

    //find the next greater number of idx
    for(int i=n-1; i>idx;i--){
      if (arr[i] > arr[idx]) {
        swap(arr[i], arr[idx]);
        break;
      }
    }

     //either sort or reverse to get minimum no. after place the greater no.before it.
     reverse(arr.begin()+idx+1,arr.end());
     return arr;
}