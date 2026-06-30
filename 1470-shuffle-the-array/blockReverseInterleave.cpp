/*
Input Example: nums = [1, 2, 8, 9], n = 2
Expected Output Vector: [1, 9, 2, 8]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> shuffle(vector<int>& nums,int n){
        vector<int> ans(n * 2);
        for(int i=0;i<n;i++){
            ans[2*i]=nums[i];
            ans[2*i+1]=nums[(2*n-1)-i];
        }
        return ans;
    }
};

int main(){
    structure solver;

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements: ";
    for(int i=0;i<size;i++){
        cin >> nums[i];
    }

    int shift;
    cout << "Enter the shift: ";
    cin >> shift;
 
    vector<int> result = solver.shuffle(nums,shift);
    cout << "result : [ ";
    for(int num : result){
        cout << num << " ";
    }
    cout << "]" << endl;
    return 0;
}