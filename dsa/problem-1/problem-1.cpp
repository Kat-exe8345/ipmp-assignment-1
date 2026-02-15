#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void revArr(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = k % nums.size();
        revArr(nums, 0, nums.size() - 1);
        revArr(nums, 0, n - 1);
        revArr(nums, n, nums.size() - 1);
    }
};

// Test cases
int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    sol.rotate(nums1, k1);
    // Expected output: [5, 6, 7, 1, 2, 3, 4]

    // Test case 2
    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    sol.rotate(nums2, k2);
    // Expected output: [3, 99, -1, -100]

    // Output section
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

