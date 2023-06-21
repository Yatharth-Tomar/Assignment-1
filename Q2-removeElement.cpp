class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(val==nums[i]){
                auto it=nums.begin();
                nums.erase(it+i);
                i--;
            }
        }
        return nums.size();
        
       
    }
};