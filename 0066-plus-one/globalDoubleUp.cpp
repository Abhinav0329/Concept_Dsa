/*
Input Example: digits = [4, 9]
Expected Output Vector: [9, 8] (Since 49 doubled is 98)
Tricky Input Example: digits = [9, 9]
Expected Output Vector: [1, 9, 8] (Since 99 doubled is 198, requiring a new slot at the front)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> doubleArray(vector<int>& digits){
        int n = digits.size();
        int carry = 0;
        
        for(int i = n - 1; i >= 0; i--){
            int product = digits[i] * 2 + carry;
            digits[i] = product % 10;  
            carry = product / 10;
        }
        if(carry > 0){
            digits.insert(digits.begin(), carry);
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
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
    vector<int> result = solver.doubleArray(nums);

    cout << "Result: [ ";
    for(int num : result){
        cout << num << " ";
    } 
    cout << "]" << endl;
    return 0;
}