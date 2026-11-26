/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/
class Solution {
public:
    void reverse(vector<int>& nums, int low, int high){
        while(low < high){
            int temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;              // Handle k > n

        reverse(nums, 0, n-1);      // Reverse whole array
        reverse(nums, 0, k-1);      // Reverse first k elements
        reverse(nums, k, n-1);      // Reverse remaining elements
    }
};