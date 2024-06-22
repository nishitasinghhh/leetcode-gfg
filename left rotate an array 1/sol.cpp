void solve(vector<int> &arr,int n)
{
    vector<int>nums(n);
    int temp=arr[0];
    for(int i=1; i<n; i++)
    {
        nums[i-1]=arr[i];
    }
    nums[n-1]=temp;
}
//time complexity:- O(N);
//space complexity:- O(N);