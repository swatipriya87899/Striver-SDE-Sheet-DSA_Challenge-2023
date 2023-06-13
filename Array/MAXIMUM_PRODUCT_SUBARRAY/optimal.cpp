//Question Link - https://www.codingninjas.com/codestudio/problems/maximum-product-subarray_1115474?leftPanelTab=0
#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	int prefix=1;
	int suffix=1;
	int maxm=INT_MIN;

	for(int i=0; i<n; i++){
		if(prefix==0)
			prefix=1;
		if(suffix==0)
		    suffix=1;
		
		prefix*=arr[i];
		suffix*=arr[n-1-i];
	
		maxm=max(maxm, max(prefix,suffix));
	}
	return maxm;
}