#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int index = 0;
    int left = 0;
    int right = n - 1;
    while (index <= right) {
        if (nums[index] == 0) {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if (nums[index] == 2) {
            swap(nums[index], nums[right]);
            right--;
        }
        else {
            index++;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 1, 2, 1, 0};
    sortColors(nums);
    cout << "Sorted Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

//Another

#include<iostream>
#include<vector>

using namespace std;
void sortColors(vector<int>& nums){
    int size = nums.size(), index = 0, left = 0, right = size-1;
    while(index <= right){
        if(nums[index]==0){
           swap(nums[index], nums[left]);
           index++;
           left++;
        }
        else if(nums[index]==2){
            swap(nums[index], nums[right]);
            right--;
        }
        else{
            index++;
        }
    }
}
int main()
{
    vector<int> nums = {1,0,2,2,1,0,1,0};
    sortColors(nums);
    for(int size : nums){
        cout<< size;
    }
    cout<< endl;
    return 0;
}

//