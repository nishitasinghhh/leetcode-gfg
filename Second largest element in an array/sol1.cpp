class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	  int largest=INT_MIN; // to store largest element
	  int second_largest=INT_MIN; // to store second larget element
	  for(int i=0; i<n;i++) // to find the largest element in the array
	  {
	      largest=max(largest,arr[i]);
	  }
	  for(int i=0; i<n; i++) // to find second largest
	  {
	      if(arr[i]>second_largest && arr[i]!=largest)
	      {
	          second_largest=arr[i];
	      }
	  }
	  if(second_largest==INT_MIN) return -1; // if second largest dosent exists;
	  return second_largest;
        
	}
};
// time complexity:- O(n)+O(n)
//space complexity :-O(1)
