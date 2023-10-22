#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int> nums){
    int sum = 0, num = nums.size(), index;
    for(index = 0; index<num; index++){
        sum = sum + nums[index];
    }
    int totalSum = ((num + 1) * (num + 2)) / 2;  // Updated this line for the correct formula
    int ans = totalSum - sum;
    return ans;
}
int main()
{   
    vector<int> nums = {1,2,3,5,6,7,8,9,10};
    int missingNumber = missingNum(nums);
    cout<< "The missing number is: "<< missingNumber << endl;
    return 0;
}