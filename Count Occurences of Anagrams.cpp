bool isAnagram(vector<int> pattern, vector<int> window){
        for( int i = 0; i < 26; i++){
            if(pattern[i] != window[i])
                return false;
        }
        
        return true;
    }
    
    
	int search(string pat, string txt) {
	    // code here
	    int p = pat.size(), t = txt.size();
	    int count = 0;
	    
	    vector<int>pattern(26,0);
	    vector<int>window(26,0);
	    
	    for(int i = 0; i < p; i++){
	        pattern[pat[i] - 'a']++;
	        window[txt[i] - 'a']++;
	    }
	    
	    if(isAnagram(pattern, window)){
	        count++;
	    }
	    
	    for(int i = p; i<t; i++){
	        window[txt[i] - 'a']++;
	        
	        window[txt[i - p] - 'a']--;
	        
	        if(isAnagram(pattern, window))
	            count++;
	    }
	    
	    return count;
