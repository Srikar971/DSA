class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=-101;
        vector<int> k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=p)  k.push_back(nums[i]);
            p=nums[i];
        }
        for(int i=0;i<k.size();i++){
           
            nums[i]=k[i];
        }
        return k.size();
    }
};