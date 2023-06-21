class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count=n;
        auto it=nums2.begin();
        for(int i=((m-1)+n);i>=0;i--){
            if(count!=0){
                nums1.erase(nums1.begin()+i);
                nums1.push_back((*it));
                it++;
                count--;
            }
        }
        sort(nums1.begin(),nums1.end());
        for(auto x: nums1){
        cout<<x<<" ";
    }
    }
    
};