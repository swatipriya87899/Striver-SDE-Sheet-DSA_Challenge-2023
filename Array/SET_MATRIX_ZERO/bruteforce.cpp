//problem link - https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h>
void changeRow(int j, int r, vector<vector<int>> & matrix){
	for(int i=0; i<r; i++){
		if(matrix[i][j]!=0)
		matrix[i][j]=-1;
	}
}

void changeCol(int i, int r, vector<vector<int>> & matrix){
	for(int j=0; j<r; j++){
		if(matrix[i][j]!=0)
		matrix[i][j]=-1;
	}
}
void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size(), m=matrix[0].size();
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==0){
				changeRow(j, n,matrix);
				changeCol(i,m,matrix);
			}
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(matrix[i][j]==-1)
			matrix[i][j]=0;
		}
	}



}