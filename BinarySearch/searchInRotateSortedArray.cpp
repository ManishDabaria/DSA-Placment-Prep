#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to search for the target element in the array
    int search(vector<int>& nums, int target) {
        // Get the size of the array
        int n = nums.size();

        // Loop through the array to find the target element
        for (int i = 0; i < n; i++) {
            // Check if the current element is the target
            if (nums[i] == target)
                // Return the index if the target is found
                return i;
        }

        // Return -1 if the target is not found
        return -1;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    // Create an instance of the Solution class
    Solution sol;
    
    // Function call to search for the target element
    int result = sol.search(nums, target);

    if (result == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << result << "\n";

    return 0;
}
