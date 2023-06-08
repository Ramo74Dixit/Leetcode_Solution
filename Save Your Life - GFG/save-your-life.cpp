//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here  
          string res,temp;
          int sum=0,maxsum=INT_MIN;
          for(int i=0;i<w.size();i++){
              int f=0,j=0;
              for( j=0;j<n;j++){
                  if(x[j]==w[i]){
                      f=1;
                      break;
                  }
              }
              if(f==1)sum+=b[j];
              else sum+=int(w[i]);
              temp+=w[i];
              if(sum>maxsum){
                  res=temp;
                  maxsum=sum;
              }
              if(sum<0){
                  sum=0;
                  temp.clear();
              }
          }
          return res;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends