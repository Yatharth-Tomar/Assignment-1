class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
      
            for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
                nums.erase(nums.begin()+i);
                n--;
                i--;
                
            }
        }
     
        for(int i=0;i<count;i++){
            nums.push_back(0);
        }
        
       
  
    }
};