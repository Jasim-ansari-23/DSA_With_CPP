#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans(n);
    for (int index = 0; index < n; index++) {
        int newindex = (index + k) % n;
        ans[newindex] = nums[index];
    }
    nums = ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;
    rotate(nums, k);
    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}