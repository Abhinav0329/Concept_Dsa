/*
Input Example: digits = [1, 2, 0]
Expected Output Vector: [1, 1, 9]
Tricky Input Example: digits = [1, 0, 0, 0]
Expected Output Vector: [9, 9, 9] (so it doesn't print out as [0, 9, 9, 9].)
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> minusOne(vector<int>& digits){
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]>0){
                digits[i]--;
                    if(digits[0]==0 && digits.size()>1){
                        digits.erase(digits.begin());
                    }
                return digits;
            }
            else{
                digits[i]=9;
            }
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

    vector<int> result = solver.minusOne(nums);

    cout << "Result: [";
    for(int num : result){
        cout << num << " ";
    } 
    cout << "]" << endl;
    return 0;
}