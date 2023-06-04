//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int i=array1.size();
        int j=array2.size();
        int l=i+j;
        double arr3[i+j];
        for(int k=0;k<i;k++)
        {
            arr3[k]=array1[k];
        }
        int a=0; 
        for(int k=i;k<l;k++)
        {
            arr3[k]=array2[a++];
        }
        sort(arr3,arr3+l);
        if(l%2==0){
            int x=l/2;
            double y=arr3[x];
            double z=arr3[x-1];
            double mod=(y+z)/2;
            return mod;
        }
        else{
            int e=(l/2);
            return arr3[e];
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends