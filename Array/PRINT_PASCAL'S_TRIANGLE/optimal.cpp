vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> arr(N);

    for(int i=0; i<N; i++){
        arr[i].resize(i+1);
    }

    for(int i=0; i<N; i++){
        int res=1; int row=i;
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                arr[i][j]=1;
            }
            else{
                res=res*row;
                res=res/j;
                row--;
                arr[i][j]=res;
            }
        }
    }
    return arr;
}