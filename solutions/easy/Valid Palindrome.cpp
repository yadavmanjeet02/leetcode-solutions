// Title: Valid Palindrome
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-palindrome/

       while(start<=end){
           if(!isalnum(s[start])){start++; 
           if(!isalnum(s[end])){end--;
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
                continue;
           
                continue;


            }
            }
               end--;
           }
       }
       return true;
}
};
