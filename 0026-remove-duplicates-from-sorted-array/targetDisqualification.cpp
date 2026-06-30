/*
Input Example: nums = [3, 2, 2, 3], target = 3
Expected Output Number: 2 (the modified array will start with [2, 2, ... ])
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeTarget(vector<int>& nums, int target) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != target) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};

int main() {
    Solution solver;

    int size, target;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target to disqualify: ";
    cin >> target;

    int remainingCount = solver.removeTarget(nums, target);

    cout << "\nExpected Output Number (k): " << remainingCount << endl;
    
    cout << "Modified array look: [ ";
    for (int i = 0; i < remainingCount; i++) {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}