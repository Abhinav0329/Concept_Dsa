/*
Input Example: nums = [0, 4, 0, 1, 3]
Expected Output Number: 3 (and your modified array should start with [4, 1, 3, ...])
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int moveZeros(vector<int>& nums) { 
        if(nums.empty()) return 0;
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[k] = nums[i]; 
                k++;
            }
        }
        for(int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
        return k; 
    }
};

int main(){
    Solution solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }

    int nonZeroCount = solver.moveZeros(nums);
    cout << "\nExpected Output Number (k): " << nonZeroCount << endl;

    cout << "Modified array look: [ ";
    for(int num : nums){
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}