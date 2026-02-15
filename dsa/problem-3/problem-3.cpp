#include <map>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> temp;
        for (auto it : nums){
            temp[it]++;
            if(temp[it] == 3) temp.erase(it);
        }
        return temp.empty() ? -1 : temp.begin()->first;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {2, 2, 3, 2};
    int result1 = sol.singleNumber(nums1);
    cout << "Test Case 1 - Single Number: " << result1 << endl; // Expected output: 3

    // Test case 2
    vector<int> nums2 = {0, 1, 0, 1, 0, 1, 99};
    int result2 = sol.singleNumber(nums2);
    cout << "Test Case 2 - Single Number: " << result2 << endl; // Expected output: 99

    return 0;
}