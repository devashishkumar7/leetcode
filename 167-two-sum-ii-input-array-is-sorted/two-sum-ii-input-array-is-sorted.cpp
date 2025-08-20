class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int left = 0; // Initialize left pointer at the beginning of the array
        int right = numbers.size() - 1; // Initialize right pointer at the end of the array

        while (left < right) {
            int current_sum = numbers[left] + numbers[right];

            if (current_sum == target) {
                // Found the pair, return 1-based indices
                return {left + 1, right + 1};
            } else if (current_sum < target) {
                // Sum is too small, move left pointer to increase the sum
                left++;
            } else {
                // Sum is too large, move right pointer to decrease the sum
                right--;
            }
        }
        // This part should ideally not be reached as per problem constraints
        // (guaranteed exactly one solution)
        return {}; 
    }
};