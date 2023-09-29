class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
     int n=nums.size();
        int dir=0;
        for(int i=1;i<n;i++){
            if(dir==0 && nums[i]>nums[i-1])
                dir=1;
            else if(dir==0 && nums[i]<nums[i-1])
                dir=-1;
            else if(dir ==1 && nums[i]<nums[i-1])
                return false;
            else if(dir==-1 && nums[i]>nums[i-1])
                return false;
        }
        return true;
        
    }
};