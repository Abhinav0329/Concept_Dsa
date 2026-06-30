/*
Input Example: digits = [3, 8]
Expected Output Vector: [4, 6](8 doubled is 16. Keep 6, carry 1 to the 3)
Tricky Input Example: digits = [9,9,9]
Expected Output Vector: [1,0,0,8]
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> doubleArray(vector<int>& digits){
        if (digits.empty()) return digits;
        int n=digits.size();
        int product = digits[n - 1] * 2;
        digits[n - 1] = product % 10;
        int carry = product / 10;
        for(int i=n-2;i>=0;i--){
            if(carry==0) break;

            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum/10;
        }
        if(carry > 0){
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};

int main(){
    Solution solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements: ";
    for(int i=0;i<size;i++){
        cin >> nums[i];
    }

    vector<int> result = solver.doubleArray(nums);

    cout << "Result: [";
    for(int num : result){
        cout << num << " ";
    } 
    cout << "]" << endl;
    return 0;
}