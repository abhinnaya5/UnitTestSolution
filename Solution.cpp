#include <iostream>
#include <vector>

int search(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        // If the left half is sorted
        if (nums[left] <= nums[mid]) {
            // Check if the target lies within the left half
            if (target >= nums[left] && target < nums[mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        // If the right half is sorted
        else {
            // Check if the target lies within the right half
            if (target > nums[mid] && target <= nums[right]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    return -1;  // Target element not found
}

int main() {
    std::vector<int> nums = { 4, 5, 6, 7, 0, 1, 2 };
    int target = 0;

    int result = search(nums, target);

    std::cout << "Target index: " << result << std::endl;

    return 0;
}
