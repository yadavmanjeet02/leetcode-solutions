// Title: Permutation Sequence
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/permutation-sequence/

        numbers.push_back(n);
        k-=1;
        string ans="";
        while(true){
            ans=ans+ to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+k/fact);
            if(numbers.size()==0){
                break;
            }
            k=k%fact;
            fact=fact/numbers.size();
        }
        return ans;
        
    }
};
