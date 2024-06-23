class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(auto ele:nums)// traversing through each array ele
        {
            if(i==0 || i==1 || nums[i-2]!=ele) // i==0, ensures the first element is always included
                                               // i=1, ensures the second element is always included
                                               //nums[i-1]!=ele, checks if the current element eleis not same as the two position before element
            {
                nums[i]=ele;
                i++;
            }
        }
        return i;
    }
};
//time complexity:- O(N)
//space complexity:- O(1)