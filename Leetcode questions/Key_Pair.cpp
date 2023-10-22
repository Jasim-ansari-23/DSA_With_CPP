#include<bits/stdc++.h>
using namespace std;

void Two_Sum(vector<int> nums, int target){
    sort(nums.begin(), nums.end());
    int size = nums.size(), left = 0, right = nums.size() - 1;
    while(left<right){
        int currentSum = nums[left] + nums[right];
        if(currentSum == target){
            cout<< "Target found: "<< nums[left]<<" + "<< nums[right]<< " = "<< target << endl;
            return;
        }
        else if(currentSum < target){
            left++;
        }
        else{
            right--;
        }
    }
    cout<< "Target not found";
}
int main()
{
    vector<int> nums = {1,4,45,6,10,8};
    int target = 16;
    Two_Sum(nums, target);
    return 0;
}

//Other approach

#include<iostream>
#include<vector>
using namespace std;

void Find_pair(vector<int> nums, int target){
    int num = nums.size();
    for(int i = 0; i<num; i++){
        for(int j = i+1; j<num; j++){
            if(nums[i] + nums[j] == target){
                cout<< "Target fount: "<< target << endl;
                return;
            }
        }
    }
    cout<< "Target not found" << endl;
}

int main()
{
    vector<int> nums = {1,4,45,6,10,8};
    int target = 16;
    Find_pair(nums, target);
    return 0;
}

//For sorted array

#include<iostream>
#include<vector>
using namespace std;

void Find_pair(vector<int> nums, int target){
    int num = nums.size(), left = 0, right = num -1;
    while(left<right){
        int currentSum = nums[left] + nums[right];
        if(currentSum == target){
            cout<< "Target found: "<< target << endl;
            return;
        }
        else if(currentSum > target){
            right--;
        }
        else{
            left++;
        }
    }
    cout<< "Target not found" << endl;
}

int main()
{
    vector<int> nums = {1,4,6,8,10,45};
    int target = 16;
    Find_pair(nums, target);
    return 0;
}

//