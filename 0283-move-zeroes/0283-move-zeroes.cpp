class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int Nonzero=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[Nonzero]=nums[i];
                Nonzero++;
            }
        }
        for(int i=Nonzero;i<n;i++){
            nums[i]=0;
        }
    }
};