#include "pch.h"
#include "C:\Users\User\source\repos\Neetcode25_Solution\Solution.cpp"

TEST(SearchTest, FindTargetInRotatedArray) {
    std::vector<int> nums = { 4, 5, 6, 7, 0, 1, 2 };
    int target = 0;

    int result = search(nums, target);

    EXPECT_EQ(result, 4);
}