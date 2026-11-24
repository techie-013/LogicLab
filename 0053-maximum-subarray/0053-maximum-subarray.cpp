class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempsum=0;
        int finalsum=nums[0];
        for(int i =0;i<nums.size();i++){
            tempsum=tempsum+nums[i];
            if(tempsum>finalsum){
                finalsum=tempsum;
            }
            if(tempsum<0){
                tempsum=0;
            }
        }
    return finalsum;
    }
};