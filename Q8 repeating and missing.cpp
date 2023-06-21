class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long s1=0,s2=0,r1=0,r2=0;
        long n=nums.size();
        for(auto x:nums){
            s1+=x;
            s2+=pow(x,2);
        }
        r1+=(n*(n+1))/2;
        r2+=(n*(n+1)*((2*n)+1))/6;

        long r2Ms2=r2-s2;
        long r1Ms1=r1-s1;
        long r1Ps1=r2Ms2/r1Ms1;
        long x=(r1Ms1+r1Ps1)/2;
        long y=r1Ps1-x;

        vector<int> v;
        v.push_back(y);
        v.push_back(x);
        return v;

    }
};