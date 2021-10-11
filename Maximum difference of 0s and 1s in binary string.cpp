//Maximum difference of zeros and ones in binary string
int maxSubstring(string S)
	{
	    // Your code goes here
	    int max_sum = 0;
	    int max_value = INT_MIN;
	    
	    for(int i = 0; i < S.length(); i++){
	        
	        int x = (S[i] == '0')?1:-1;
	        max_sum += x;
	        
	        if(max_sum > max_value)
	            max_value = max_sum;
	        if(max_sum < 0 )
	            max_sum = 0;
	    }
	    
	    return max_value;
	}
