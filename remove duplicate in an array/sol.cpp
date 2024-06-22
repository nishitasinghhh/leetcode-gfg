class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int>st;
       int n=nums.size();
       for(int i=0; i<n; i++)
       {
        st.insert(nums[i]);
       }
       int k=st.size();
       int j=0;
       for(auto it:st)
       {
        nums[j++]=it;
       }
       return k;
    }
};
// time complexity:- O(nlogn)+O(n);
//space complexity:- O(n);