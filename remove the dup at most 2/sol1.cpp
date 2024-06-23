class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>temp;
        for(int i=0; i<nums.size(); i++) // used to store the elemet and its frequency
        {
            mpp[nums[i]]++;
        }

    for(auto it:mpp) // used to iterate over the map 
    {
        if(it.second<=nums.size()&& it.second>1) // condition when the frequency is more than 1
        {
            for(int i=0; i<2; i++)
            {
                temp.push_back(it.first);
            }
        }
        if(it.second==1)
        {
            temp.push_back(it.first);
        }
    }
    nums=temp; //passing the array temp into original nums array 
    return nums.size();
    }
};
// time complexity:- O(nlogn)+O(n)+O(n)
//space complexity:-O(n)+O(n)