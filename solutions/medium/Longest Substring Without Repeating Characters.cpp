// Title: Longest Substring Without Repeating Characters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l =hash[s[r]]+1;
                }
            }
            int len =r-l+1;
            maxlen =max(maxlen,len);
            hash[s[r]] =r;
            r++;
        }
        return maxlen;
        l=r=maxlen=0;
        int l,r,maxlen;
        vector<int>hash(256,-1);
    int lengthOfLongestSubstring(string s) {
    }
};
