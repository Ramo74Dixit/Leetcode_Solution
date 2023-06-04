class Solution {
public:
    double findMedianSortedArrays(vector<int>& ar1, vector<int>& ar2) {
            vector<double>v;
            // int n=ar1.size()+ar2.size();
            for(int i=0;i<ar1.size();i++){
                v.push_back(ar1[i]);
            }
            for(int i=0;i<ar2.size();i++){
                v.push_back(ar2[i]);
            }
            sort(v.begin(),v.end());
            int n=v.size();
            if(n%2!=0){
                return v[n/2];
            }
            else{
                return ((v[n/2] + v[n/2-1]))/2;
            
        }
        
    }
};