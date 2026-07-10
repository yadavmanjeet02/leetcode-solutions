// Title: Implement Queue using Stacks
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/implement-queue-using-stacks/

        output.pop();
        return x;
    }

    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};
