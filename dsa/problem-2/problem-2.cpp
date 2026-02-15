#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> mergeArrs(vector<int> &a, vector<int> &b) {
        vector<int> res;
        int i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                res.push_back(a[i++]);
            } else {
                res.push_back(b[j++]);
            }
        }
        while (i < a.size()) {
            res.push_back(a[i++]);
        }
        while (j < b.size()) {
            res.push_back(b[j++]);
        }
        return res;
    }
    
    double Median(vector<int> &a) {
        int n = a.size();
        double median;
        return median = n % 2 ? a[n/2] : (a[n/2] + a[(n/2)-1]) / 2.0;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged = mergeArrs(nums1, nums2);
        return Median(merged);
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double median1 = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Test Case 1 - Median: " << median1 << endl; // Expected output: 2.0

    // Test case 2
    vector<int> nums3 = {1, 2};
    vector<int> nums4 = {3, 4};
    double median2 = sol.findMedianSortedArrays(nums3, nums4);
    cout << "Test Case 2 - Median: " << median2 << endl; // Expected output: 2.5

    return 0;
}