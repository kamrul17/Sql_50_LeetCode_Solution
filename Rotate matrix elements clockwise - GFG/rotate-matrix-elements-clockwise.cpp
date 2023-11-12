//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> Mat) {
        int row =0,col=0;
        int currentIndex,previousIndex;
        while(row<M && col<N){
            if(row+1==M||col+1==N){
                break;
            }
            previousIndex=Mat[row+1][col];
            
            // moving first element in first row
            for(int i=col;i<N;i++){
                currentIndex=Mat[row][i];
                Mat[row][i]=previousIndex;
               previousIndex =currentIndex;
            }
            row++;
                
            // moving  element of last col
             for(int i=row;i<M;i++){
                currentIndex=Mat[i][N-1];
                Mat[i][N-1]=previousIndex;
               previousIndex =currentIndex;
            }
            N--;
               // moving  element of last row
               if(row<M){
                  for(int i=N-1;i>=col;i--){
                currentIndex=Mat[M-1][i];
                Mat[M-1][i]=previousIndex;
               previousIndex =currentIndex;
            }
            M--;   
               }
           
              // moving  element of first row
              if(col<N){
                   for(int i=M-1;i>=row;i--){
                currentIndex=Mat[i][col];
               Mat[i][col]=previousIndex;
               previousIndex =currentIndex;
            }
            col++;
              }
            
        }
        return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends