class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currproduct;
        int finalproduct=nums[0];
        for(int i=0;i<nums.size();i++){
            currproduct=1;
            for(int j=i;j<nums.size();j++){
                currproduct=currproduct*nums[j];
            if(currproduct>finalproduct){
                finalproduct=currproduct;
            }
        }
        }
        return finalproduct; 
    }
};