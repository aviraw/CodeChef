//Given an array of size N, find the number of distinct pairs {i, j} (i != j) in the array such that the sum of a[i] and a[j] is greater than 0.

class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here
    	sort(a, a + n);
    	long long  ans = 0;
    	for(int i = 0; i < n; i++)
    	{
    	    if(a[i] <= 0)
    	        continue;
    	    
    	    int j = lower_bound(a, a+n, -a[i] + 1)-a;
    	    ans += i-j;
    	}
    	return ans; 
    }   
};
