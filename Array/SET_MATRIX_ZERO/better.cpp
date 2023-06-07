//problem link - https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int r=matrix.size(), c=matrix[0].size();
	vector<int> row(r,0);
	vector<int> col(c,0);

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(matrix[i][j]==0){
				row[i]=1; 
				col[j]=1;
			}
		}
	}

	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(row[i]==1 || col[j]==1)
			matrix[i][j]=0;
		}
	}
}