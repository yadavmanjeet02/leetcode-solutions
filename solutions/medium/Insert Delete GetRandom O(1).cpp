// Title: Insert Delete GetRandom O(1)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/insert-delete-getrandom-o(1)/


        v[index] = last;
        mp[last] = index;

        v.pop_back();
        mp.erase(val);

        return true;
    }

    int getRandom() {
        int index = mp[val];
        int last = v.back();


        if (!search(val))
            return false;
    bool remove(int val) {

