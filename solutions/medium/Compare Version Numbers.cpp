// Title: Compare Version Numbers
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/compare-version-numbers/

            }
                j++;

            if (num1 > num2)
                return 1;

            if (num1 < num2)
                return -1;

            i++;
            j++;
        }

        return 0;
    }
};
                num2 = num2 * 10 + (version2[j] - '0');
            while (j < version2.size() && version2[j] != '.') {
