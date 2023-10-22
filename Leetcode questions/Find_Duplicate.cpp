#include<iostream>
#include<vector>
using namespace std;

void find_duplicate(vector<int> nums){
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]==nums[i+1]){
            cout<< nums[i]<< " are duplicate in array" <<endl;
            return;
        }
    }
    cout<< "There is no duplicate element";
}
int main()
{
    vector<int> nums = {1,2,2,3,4};
    find_duplicate(nums);
    return 0;
}