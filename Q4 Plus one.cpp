class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int carry=1;
        int n=d.size();
        for(int i=n-1;i>=0;i--){
            if(carry==1){
                d[i]+=1;
                carry=0;
                if(d[i]>=10){
                    d[i]=0;
                    carry=1;
                }
            }
        }
        if(carry==1){
            d.insert(d.begin(),1);
        }

        return d;

    }
    
};