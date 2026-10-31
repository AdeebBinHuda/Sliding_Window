class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int zero_count=0;
        int max_len=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero_count++;
            }

            while(zero_count>k){
                if(nums[left]==0){
                    zero_count--;
                }
                left++;
            }
            max_len= max(max_len,i-left+1);
        }
        return max_len;
    }
};