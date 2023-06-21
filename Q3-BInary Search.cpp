class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size() -1;
       int key;
       int mid;

        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        if(target<nums[0]){
            return 0;
        }


       while(low<=high){
           mid=(low+high)/2;
           cout<<"mid "<<mid<<endl;
           if(nums[mid]<target){
               low=mid+1;
               cout<<"Low"<<low<<endl;
           }
           else if(nums[mid]>target){
               high=mid-1;
               cout<<"high "<<high<<endl;
           }
           else if(nums[mid]==target){
               return mid;
           }
       }
       cout<<low<<high;
       return low;
    
    }
    
};