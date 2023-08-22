//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int N)
    {
        // code here 
          int max = 0;
        int h = 0;
        for(int i = 0 ;i < N ;i++){
            int temp= 0;
            for(int j = 0; j < N ;j++){
                temp = temp+ matrix[i][j];
            
            }
            if(temp > max){
                max = temp;
            }
        }
        for(int i = 0 ;i < N ;i++){
            int temp= 0;
            for(int j = 0; j < N ;j++){
                temp = temp+ matrix[j][i];
            
            }
            if(temp > max){
                max = temp;
                h=1;
            }
        }
        int ans =0;
        if(h==0){
            for(int i = 0 ;i < N ;i++){
                int temp = 0;    
                for(int j = 0; j < N ;j++){
                    temp = temp+ matrix[i][j];
            
                }
                ans = ans + max - temp;
            }
        }else{
            for(int i = 0 ;i < N ;i++){
                int temp = 0;    
                for(int j = 0; j < N ;j++){
                    temp = temp+ matrix[j][i];
            
                }
                ans = ans + max - temp;
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends