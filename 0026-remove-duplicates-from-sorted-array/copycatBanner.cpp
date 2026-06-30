/*
Input Example: nums = [1, 1, 1, 2, 2, 3]
Expected Output Number: 5 (the modified array would look like [1, 1, 2, 2, 3, ...])
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicatesAtMostTwice(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        int k = 2; 
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;               
            }
        }
        return k;
    }
};

int main() {
    Solution solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    int newLength = solver.removeDuplicatesAtMostTwice(nums);

    cout << "\nExpected Output Number (k): " << newLength << endl;
    
    cout << "Modified array look: [ ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}