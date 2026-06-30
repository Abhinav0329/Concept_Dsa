/*
Input Example: nums = [1, 2, 3, 4, 5, 6], n = 2
Expected Output Vector: [1, 3, 5, 2, 4, 6]
*/

#include<iostream>
#include<vector>
using namespace std;

class structure{
    public:
    vector<int> shuffle(vector<int>& nums,int n){
        vector<int> ans(n * 3);
        for(int i=0;i<n;i++){
            ans[3*i]=nums[i];
            ans[3*i+1]=nums[i+n];
            ans[3*i+2]=nums[i+n*2];
        }
        return ans;
    }
};
/*
NOTE:-interleaving problem is to entirely avoid conditional checks (if-else) and variable tracking (k--) 
as every single element would fail this check if they are all even numbers or odd numbers!
        int k = 2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                ans[i/n]=nums[i];
            }
            else{
                ans[i+k]=nums[i];
                k--;
            }
*/

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