//The solution we built only works if the input array is sorted.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> uniquenums;
        uniquenums.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                uniquenums.push_back(nums[i]);
            }
        }
        return uniquenums;
    }
};

int main(){
    Solution solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements: ";
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    vector<int> result = solver.removeDuplicates(nums);

    cout << "result : [";
    for(int num : result){
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}