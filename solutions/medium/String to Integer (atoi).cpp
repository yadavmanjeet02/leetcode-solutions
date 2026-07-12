// Title: String to Integer (atoi)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/string-to-integer-(atoi)/

            int digit = s[i] - '0';

            if (ans > INT_MAX / 10 ||
                (ans == INT_MAX / 10 &&
                 digit > (sign == 1 ? 7 : 8))) {

                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return sign * ans;
    }
};

        while (i < n && isdigit(s[i])) {

        long long ans = 0;
