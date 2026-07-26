class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //boyer-moore voting
        int cand = nums[0];
        int c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == cand){
                c++;
            }
            else if(nums[i] != cand && c > 0){
                c--;
            }
            else if(nums[i] != cand && c == 0){
                cand = nums[i];
            }
        }
        return cand;
    }
};