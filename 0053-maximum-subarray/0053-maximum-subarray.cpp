class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int MaxS=INT_MIN;
        int Curr=0;
        for(int i=0;i<n;i++){
            Curr=max(nums[i],Curr+nums[i]);
            MaxS=max(Curr,MaxS);
        }
        return MaxS;
    }
};