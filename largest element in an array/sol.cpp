class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxi=INT_MIN ;// store the maximum value
        for(int i=0; i<n;i++)
        {
            maxi=max(arr[i],maxi);
        }
        return maxi;
    }
};

// time complexity:- O(n)
//space complexity :-O(1)